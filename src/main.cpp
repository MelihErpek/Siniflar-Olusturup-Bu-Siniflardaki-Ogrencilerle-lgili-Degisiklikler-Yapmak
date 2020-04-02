
#include <iostream>
#include "Sinif.hpp"
#include "Okul.hpp"

using namespace std;




int main()
{
	
	int giris = 0; // Gerekli tanimlamalar yapiliyor.
	int secim2 = 0;
	int secim3 = 0;
    int id = 0;
    int id2 = 0;
    int sinifid,sinifid2 = 0;

	
	Sinif* sinif = new Sinif(); // Gerekli dugum ifadeleri olusturuluyor.
    Okul* okul = new Okul();
    Dugum* baslangic = NULL;

    okul->sinifaOgrenciEkle();
    okul->sinifYazdir();
    

	do
	{

		cout << "1... Ogrenci Degistir" << endl;
		cout << "2... Ogrenci Sil" << endl;
		cout << "3... Ogrenci ekle" << endl;
		cout << "4... Cikis" << endl;
        cout << "Tercihiniz : ";
		cin >> giris;

		if (giris == 1) // Ogrenci degistirmek icin gerekli kosullar saglaniyor.
		{
            cout << "Sinif kodu:"<< endl;
            cin >> sinifid ;
            cout << "Ogrenci Numarasi:"<< endl;
            cin >>id;
            cout << endl;
            cout << "Sinif kodu:" << endl;
            cin>> sinifid2;
            cout << "Ogrenci Numarasi:"<< endl;
            cin >> id2;

            if((sinifid == 1 || sinifid == 2) && (sinifid2 == 1 || sinifid2 == 2 ))
            {
                    sinif->siniftaOgrenciDegistir( &okul->sinifDizisi[sinifid-1],&okul->sinifDizisi[sinifid2-1] ,id,id2);
                    okul->sinifYazdir();
            }
            else
            {
                
                okul->sinifYazdir();
                cout << endl << "Hatali Secimler Yaptiniz" << endl;
            }

        }

		if (giris == 2) // Ogrenci silmek icin gerekli kosullar saglaniyor.
		{
            cout << "Sinif kodu:";
            cin >> id ;
            cout << "Ogrenci Numarasi:";
            cin >> secim2;

            if(id == 1)
            {
                
                okul->sinifDizisi[0].siniftaOgrenciSil(secim2);
                okul->siniftanOgrenciSil();
                okul->sinifYazdir();
            }
            if(id == 2 )
            {
                
                okul->sinifDizisi[1].siniftaOgrenciSil(secim2);
                okul->siniftanOgrenciSil2();
                okul->sinifYazdir();
            }
		
			
			
		}
		if (giris == 3) // Ogrenci eklemek icin gerekli kosullar saglaniyor.
		{
            cout << "Sinif kodu:";
            cin >> id;
			
            if(id==1)
            {
                
                okul->sinifDizisi[0].siniftaOgrenciEkle();
                okul->birinciSinifaOgrenciEkle();
                okul->sinifYazdir();
            }
            if (id==2)
            {
                
                okul->sinifDizisi[1].siniftaOgrenciEkle();
                okul->ikinciSinifaOgrenciEkle();
                okul->sinifYazdir();
            }
            
			
		}

	} while (giris != 4); // Cikisa kadar devam eden do-while dongusu

	
	cin.get();
}

