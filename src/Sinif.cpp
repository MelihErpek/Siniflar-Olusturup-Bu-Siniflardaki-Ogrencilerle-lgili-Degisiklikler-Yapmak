/****************************************************************************
**              		SAKARYA UNIVERSITY
**              	BILGISAYAR MUHENDISLIGI BOLUMU
**              		VERI YAPILARI
**
**              OGRENCI ISMI.....: Melih Erpek
**              OGRENCI NUMARASI.: G171210393
****************************************************************************/
#include <iostream>
#include "Sinif.hpp"
#include "Okul.hpp"
#include "Dugum.hpp"
#include <iomanip>
using namespace std;

    int Sinif::ogrenciSayisi = 0;
    int Sinif::ogrenciSayisi2 = 0;
	 


	Sinif::Sinif() // Kurucu fonksiyonda ilkDugum sifira esitleniyor.
	{
		ilkDugum = 0;
	}

	
	void Sinif::siniftaOgrenciDegistir(Sinif *secilecekSinif,Sinif *secilecekSinif2,int secilecekOgrenci,int secilecekOgrenci2)
	{
		
	
	
	 if (secilecekOgrenci==secilecekOgrenci2) // Girilen degerler esitse islem yapılmıyor.
		{
			return;
		}
		
		Dugum *oncekiOgrenci = NULL;	// Pointerlar yardımıyla gerekli islemler yapiliyor.
		Dugum *suankiOgrenci = secilecekSinif->ilkDugum;
		while (suankiOgrenci && suankiOgrenci->veri != secilecekOgrenci) // Aranan eleman bulunana kadar donen ve bulundugunda adresini tutan while dongusu.
		{
			oncekiOgrenci = suankiOgrenci;
			suankiOgrenci=suankiOgrenci->sonraki;
		}

		Dugum *oncekiOgrenci2 = NULL ; // Pointerlar yardımıyla gerekli islemler yapiliyor.
		Dugum *suankiOgrenci2 = secilecekSinif2->ilkDugum;
		
		while(suankiOgrenci2 && suankiOgrenci2->veri != secilecekOgrenci2)//Diger aranan eleman bulunana kadar donen ve bulundugunda adresini tutan while dongusu.
		{
			oncekiOgrenci2 = suankiOgrenci2;
			suankiOgrenci2 = suankiOgrenci2->sonraki;
		}

		if(suankiOgrenci == NULL || suankiOgrenci2 == NULL) // Bulunan elemanlarin adresleri yoksa islem yapilmiyor.
		{
			return ;
		}

		if(oncekiOgrenci != NULL) // Aranan ilk deger bu dugumun degeri degilse yer degistiriliyor.
		{
			oncekiOgrenci->sonraki = suankiOgrenci2 ;

		}
		else // Aranan ilk deger bu dugumun degeriyse listenin ilk dugumunun adresi olarak degistiriliyor.
		{
			secilecekSinif->ilkDugum	= suankiOgrenci2;
		}

		if(oncekiOgrenci2 != NULL) //Aranan ikinci deger bu dugumun degeri degilse yer degistiriliyor.
		{
			oncekiOgrenci2->sonraki = suankiOgrenci ;

		}
		else // Aranan ikinci deger bu dugumun degeriyse listenin ilk dugumunun adresi olarak degistiriliyor.
		{
			secilecekSinif2->ilkDugum = suankiOgrenci;
		}
        
		Dugum *geciciOgrenci = suankiOgrenci2->sonraki; // Dugumu kaybetmemek icin gerekli islemler yapiliyor.
		suankiOgrenci2->sonraki = suankiOgrenci->sonraki;
		suankiOgrenci->sonraki = geciciOgrenci;
	
	}

	void Sinif::siniftaOgrenciEkle()
	{

		if (ilkDugum == 0)		// Ilk dugum bossa yeni bir dugum olusturuluyor.
		{
			ilkDugum = new Dugum();
			ogrenciSayisi++;
            return;
		}

		Dugum* gecici = ilkDugum;

		while (gecici->sonraki != 0) // Ilk dugum bos degılse dugumun sonuna farklı bir dugum ekleniyor.
		{
			gecici = gecici->sonraki;
		}

		gecici->sonraki = new Dugum();
        ogrenciSayisi++;
	}



	void Sinif::siniftaOgrenciYazdir()
	{
		Dugum* gecici = ilkDugum;
		

		while (gecici != 0) // Istenilen ekran goruntusu icin her dugum gezilerek her veri yazilarak ekran goruntusu elde ediliyor.
		{
			cout << "*" << setw(5) << gecici->veri << setw(6) << "*  ";
			
			gecici = gecici->sonraki;
		}
		cout << endl;
		
	}


	void Sinif::siniftaOgrenciAdresYazdir()
	{

		Dugum* gecici = ilkDugum;

		while (gecici !=0 )// Istenilen ekran goruntusu icin her dugum gezilerek her verinin adresi  yazilarak ekran goruntusu elde ediliyor.
		{
			
			cout << "*" << gecici << "*  "  ;
			gecici = gecici->sonraki;

		}

		
		
		cout << endl;
		

	}
	void Sinif::siniftaOgrenciSil(int aranan)
	{
		
		if (ilkDugum == 0) // ilkDugum sifira esitse islem yapilmiyor. 
			return;

		if (ilkDugum->veri == aranan && ilkDugum->veri != 0) // Silinecek ogrenciyle dugumun verisi aynıysa
		{
			Dugum* silinecek = ilkDugum;
			
			ilkDugum = ilkDugum->sonraki; // Gerekli dugum islemleri yapiliyor.
            ogrenciSayisi--;
			delete silinecek;
			return;
		}

		Dugum* gecici = ilkDugum;
		Dugum* onceki = gecici;

		while (gecici!= NULL && gecici->veri != aranan) // Silinecek deger araniyor ve gerekli dugum islemi gerceklestiriliyor.
		{
			onceki = gecici;
			gecici = gecici->sonraki;
			
		}
		if (gecici == NULL ) // Aranan deger listede mevcut degilse islem yapilmiyor.
		{
			return;
		}
		onceki->sonraki = gecici->sonraki;
		delete gecici; 
        ogrenciSayisi--;
	}
	void Sinif :: ilkOgrenci()
	{
		Dugum* gecici = ilkDugum;
		cout << gecici ;

	}



