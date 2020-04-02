/****************************************************************************
**              		SAKARYA UNIVERSITY
**              	BILGISAYAR MUHENDISLIGI BOLUMU
**              		VERI YAPILARI
**
**              OGRENCI ISMI.....: Melih Erpek
**              OGRENCI NUMARASI.: G171210393
****************************************************************************/
#include "Ogrenci.hpp"

int Ogrenci::ogrenciNumarasi = 9;


Ogrenci::Ogrenci() // Kurucu fonksiyon yardimiyla fonksiyon her cagirildiginda ogrenciNumarasi arttiriliyor.
{
	ogrenciNumarasi++;
}


