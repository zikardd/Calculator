#include <stdio.h>
#include "kalkulator.h"

typedef struct {
	float bil1;
	float bil2;
} Bilangan;

Bilangan mintaAngka () {
	Bilangan masukan = {0.0, 0.0};
	
	// minta user masukan angka
	printf("\nMasukkan bilangan pertama: ");
	scanf("%f", &masukan.bil1);
	printf("\nMasukkan bilangan kedua: ");
	scanf("%f", &masukan.bil2);
	
	return masukan;
}