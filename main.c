#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b;				//zmienne wczytywane
	int n;					//długość tablicy
	//wczytanie zmiennych
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	printf("\n");
	//zamiana zmiennych
	if (a < b) {			
		n = a;
		a = b;
		b = n;
	}
	//utworzenie i wypełnienie tablic dziesiętnych
	if (a == 0) {
		n = 1;
	} else {
		n = log10(a) + 1;
	}
	int tab_a[n], tab_b[n], tab_przepelnienie[n], tab_wynik[n+1];
	int i;
	for (i = 0; i < n; i++) {
		tab_a[i] = a % 10;
		a = a / 10;
		tab_b[i] = b % 10;
		b = b / 10;
		if (i == 0) {
			tab_wynik[i] = tab_a[i] + tab_b[i];
		} else {
			tab_wynik[i] = tab_a[i] + tab_b[i] + tab_przepelnienie[i-1];
		}
		if (tab_wynik[i] > 9) {
			tab_wynik[i] -=  10;
			tab_przepelnienie[i] = 1;
		} else {
			tab_przepelnienie[i] = 0;
		}
	}
	tab_wynik[n] = tab_przepelnienie[n-1];
	//wypisanie wiersza przepełnień
	printf(" ");
	for (i = n - 1; i >= 0; i--) {
		if (tab_przepelnienie[i]) {
			printf("%d", tab_przepelnienie[i]);
		} else {
			printf(" ");
		}
	}
	//wypisanie a
	printf("\n  ");
	for (i = n - 1; i >= 0; i--) {
		printf("%d", tab_a[i]);
	}
	//wypisanie b
	printf("\n+ ");
	i = n - 1;
	while (!tab_b[i] && i > 0) {
		printf(" ");
		i--;
	}
	for (i; i >= 0; i--) {
		printf("%d", tab_b[i]);
	}
	//wypisanie kresek
	printf("\n");
	for (i = 0; i < n+2; i++) {
		printf("-");
	}
	//wypisanie wyniku
	printf("\n ");
	if (tab_wynik[n]) {
		printf("%d",tab_wynik[n]);
	} else {
		printf(" ");
	}
	for (i = n - 1; i >= 0; i--) {
		printf("%d", tab_wynik[i]);
	}
	return 0;
}
