/****************************************************************************
**              		SAKARYA UNIVERSITY
**              	BILGISAYAR MUHENDISLIGI BOLUMU
**              		VERI YAPILARI
**
**              OGRENCI ISMI.....: Melih Erpek
**              OGRENCI NUMARASI.: G171210393
****************************************************************************/
#ifndef  Dugum_hpp
#define Dugum_hpp
class Dugum // Dugum classi olusturulup gerekli degiskenler tanimlaniyor.
{
public:
	Dugum();
	int veri;
	Dugum* sonraki;
	Dugum* ogrenci;
private:
	string ad;
};


#endif 


