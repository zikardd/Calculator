#include <stdio.h>
#include "kalkulator.h"

void main(){
	// minta bilangan
	Bilangan pertama = mintaAngka ();
	Bilangan kedua = mintaAngka ();
	
	// penjumalahan angka
	Bilangan hasil = tambah(pertama, kedua) ;
	
	// hasil
	tampilkanAngka (pertama); 
	printf("+");
	tampilkanAngka (kedua);
	printf("=");
	tampilkanAngka (hasil);
}