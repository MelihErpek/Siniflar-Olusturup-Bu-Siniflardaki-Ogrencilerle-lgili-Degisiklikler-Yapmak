
#ifndef  Sinif_hpp
#define Sinif_hpp
#include "Dugum.hpp"
#include "Ogrenci.hpp"
class Sinif  // Gerekli dugumler ve metodlar için tanımlamalar yapılıyor.
{
public:
	Sinif();
	Dugum*  ilkDugum;
	
	void siniftaOgrenciEkle();
	void siniftaOgrenciSil(int veri);
	void siniftaOgrenciYazdir();
	void siniftaOgrenciAdresYazdir();
	void ilkOgrenci();
	void siniftaOgrenciDegistir(Sinif *secilecekSinif,Sinif *secilecekSinif2,int secilecekOgrenci,int secilecekOgrenci2);
	int aranan;
    static int ogrenciSayisi ;
    static int ogrenciSayisi2;
	
	
};
#endif
