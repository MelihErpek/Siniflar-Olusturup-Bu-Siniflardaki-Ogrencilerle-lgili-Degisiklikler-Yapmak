
#include "Dugum.hpp"
#include "Ogrenci.hpp"


Dugum::Dugum()   // Daha once tanimlanan ogrenciNumarası isimli statik degiskeni veriye aktratılıyor.
{
	Ogrenci* ogr = new Ogrenci();

	this->veri = ogr->ogrenciNumarasi;
	
	sonraki = 0;
}



