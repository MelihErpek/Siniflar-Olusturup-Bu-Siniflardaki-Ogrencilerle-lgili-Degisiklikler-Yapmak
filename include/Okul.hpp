/****************************************************************************
**              		SAKARYA UNIVERSITY
**              	BILGISAYAR MUHENDISLIGI BOLUMU
**              		VERI YAPILARI
**
**              OGRENCI ISMI.....: Melih Erpek
**              OGRENCI NUMARASI.: G171210393
****************************************************************************/
#ifndef  Okul_hpp
#define Okul_hpp
#include "Sinif.hpp"
#include "Dugum.hpp"
class Okul // Gerekli dugumler ve metodlar için tanımlamalar yapılıyor.
{
public:
	Okul();

    Sinif* sinifDizisi ;
    Dugum* ilkDugum;
    void sinifaOgrenciEkle();
    void sinifYazdir();
    
    static int ogrencisayi1,ogrencisayi2;
    void siniftanOgrenciSil();
    void siniftanOgrenciSil2();
    void birinciSinifaOgrenciEkle();
    void ikinciSinifaOgrenciEkle();
    
    
	
};
#endif


