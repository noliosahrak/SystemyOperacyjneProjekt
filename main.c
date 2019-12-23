#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b;				//zmienne wczytywane
	int n;					//d³ugoœæ tablicy
	
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	printf("\n");
	
	if (a < b) {			//zamiana zmiennych
		n = a;
		a = b;
		b = n;
	}
	
	n = log10(a) + 1;
	
	
	int tab_a[n], tab_b[n], tab_przepelnienie[n], tab_wynik[n+1];
	//testy
	printf("a=%d\nb=%d", a, b);
	printf("\nn=%d", n);
	return 0;
}
