
#include "Ogrenci.hpp"

int Ogrenci::ogrenciNumarasi = 9;


Ogrenci::Ogrenci() // Kurucu fonksiyon yardimiyla fonksiyon her cagirildiginda ogrenciNumarasi arttiriliyor.
{
	ogrenciNumarasi++;
}


