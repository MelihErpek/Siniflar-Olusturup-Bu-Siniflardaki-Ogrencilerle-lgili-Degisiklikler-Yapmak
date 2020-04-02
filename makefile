program:
	g++ -I "./include" -c ./src/Ogrenci.cpp -o  ./lib/Ogrenci.o
	g++ -I "./include" -c ./src/Dugum.cpp -o  ./lib/Dugum.o
	g++ -I "./include" -c ./src/Sinif.cpp -o  ./lib/Sinif.o
	g++ -I "./include" -c ./src/Okul.cpp -o  ./lib/Okul.o
	g++ -I "./include" -c ./src/main.cpp  -o ./lib/main.o
	g++ ./lib/Ogrenci.o ./lib/main.o ./lib/Dugum.o ./lib/Sinif.o ./lib/Okul.o -o ./bin/program
