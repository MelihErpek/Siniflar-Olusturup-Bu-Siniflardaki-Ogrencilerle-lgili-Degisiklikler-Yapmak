/****************************************************************************
**              		SAKARYA UNIVERSITY
**              	BILGISAYAR MUHENDISLIGI BOLUMU
**              		VERI YAPILARI
**
**              OGRENCI ISMI.....: Melih Erpek
**              OGRENCI NUMARASI.: G171210393
****************************************************************************/
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Okul.hpp" 
#include "Dugum.hpp"
using namespace std;




int Okul :: ogrencisayi1 = 0;
int Okul :: ogrencisayi2 = 0;



Okul::Okul()
{
    sinifDizisi = new Sinif[2]; // Toplam sinif sayisi kadar dinamik dizi olusturuluyor.
}

void Okul::sinifaOgrenciEkle() //Sinifa istenilen kadar ogrenci ekleniyor.
{
    for (int i = 0; i < 5; i++) 
    {
        sinifDizisi[0].siniftaOgrenciEkle();
        ogrencisayi1++;
    }
    
    for (int i = 0; i < 4; i++)
    {
        sinifDizisi[1].siniftaOgrenciEkle();
        ogrencisayi2++;
    }
}

void Okul::sinifYazdir() // Satır satır istenilen ekran goruntusu icin islemler yapiliyor.
{
    
    Sinif* sinif = new Sinif();
    
    cout << "----------" << endl;
    cout << "|" << &sinifDizisi[0] << "|" << endl;
    for (int  i = 0; i < ogrencisayi1+1; i++)
    {
        if (i == 0)
        {
            cout << "----------" << "  ";
        }
        else
        {
            cout << "**********" << "  " ;;
        }
    }
    
    cout << endl;
    for (int  i = 0; i < 2; i++)
    {
        if (i == 0)
        {
            cout << "|   1    |" << "  ";
        }
        
        else
        {
            sinifDizisi[0].siniftaOgrenciAdresYazdir();
        }
    }

    for (int  i = 0; i < ogrencisayi1+1; i++)
    {
        if (i == 0)
        {
            cout << "----------" << "  ";
        }
        else
        {
            cout << "**********" << "  " ;;
        }
    }
    cout << endl;

     for (int  i = 0; i < 2; i++)
    {
        if (i == 0)
        {
            cout << "|" ; 
            sinifDizisi[0].ilkOgrenci();

            cout << "|" << "  ";
        }
        
        else
        {
            sinifDizisi[0].siniftaOgrenciYazdir();
        }
    }

     for (int  i = 0; i < ogrencisayi1+1; i++)
    {
        if (i == 0)
        {
            cout << "----------" << "  ";
        }
        else
        {
            cout << "**********" << "  " ;;
        }
    }

    cout << endl;
    cout << endl;
    /*********************************************** */

    cout << "----------" << endl;
    cout << "|" << &sinifDizisi[1] << "|" << endl;
    for (int  i = 0; i < ogrencisayi2+1; i++)
    {
        if (i == 0)
        {
            cout << "----------" << "  ";
        }
        else
        {
            cout << "**********" << "  " ;;
        }
    }
    
    cout << endl;
    for (int  i = 0; i < 2; i++)
    {
        if (i == 0)
        {
            cout << "|   2    |" << "  ";
        }
        
        else
        {
            sinifDizisi[1].siniftaOgrenciAdresYazdir();
        }
    }

    for (int  i = 0; i < ogrencisayi2+1; i++)
    {
        if (i == 0)
        {
            cout << "----------" << "  ";
        }
        else
        {
            cout << "**********" << "  " ;;
        }
    }
    cout << endl;

     for (int  i = 0; i < 2; i++)
    {
        if (i == 0)
        {
            cout << "|" ; 
            sinifDizisi[1].ilkOgrenci();

            cout << "|" << "  ";
        }
        
        else
        {
            sinifDizisi[1].siniftaOgrenciYazdir();
        }
    }

     for (int  i = 0; i < ogrencisayi2+1; i++)
    {
        if (i == 0)
        {
            cout << "----------" << "  ";
        }
        else
        {
            cout << "**********" << "  " ;;
        }
    }

    cout << endl;


    
    
}
void Okul ::siniftanOgrenciSil() // Gerekli ekran goruntusu icin siniftaki ogrenci sayilarini tutan fonksiyonlar.
{
    ogrencisayi1 -- ;
}

void Okul ::siniftanOgrenciSil2()// Gerekli ekran goruntusu icin siniftaki ogrenci sayilarini tutan fonksiyonlar.
{
    ogrencisayi2 -- ;
}
void Okul :: birinciSinifaOgrenciEkle()// Gerekli ekran goruntusu icin siniftaki ogrenci sayilarini tutan fonksiyonlar.
{
    ogrencisayi1++;
}
void Okul :: ikinciSinifaOgrenciEkle()// Gerekli ekran goruntusu icin siniftaki ogrenci sayilarini tutan fonksiyonlar.
{
    ogrencisayi2++;
}



