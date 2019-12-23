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
	int i;
	for (i = 0; i < n; i++) {
		tab_a[i] = a % 10;
		a = a / 10;
		tab_b[i] = b % 10;
		b = b / 10;
	}
	//testy
	printf("a=%d\nb=%d", a, b);
	printf("\nn=%d", n);
	printf("\na=");
	for (i = n - 1; i >= 0; i--) {
		printf("|%d|", tab_a[i]);
	}
	printf("\nb=");
	for (i = n - 1; i >= 0; i--) {
		printf("|%d|", tab_b[i]);
	}
	return 0;
}
