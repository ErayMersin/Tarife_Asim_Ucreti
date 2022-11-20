#include<stdio.h>
#include<stdlib.h>

int main() {

	int gb1, dk1, gb2, dk2, toplam, odenecek;

	printf("Harcanan GB :");
	scanf_s("%d", &gb2);

	printf("Harcanan DK: ");
	scanf_s("%d", &dk2);

	gb1 = 24;
	dk1 = 1000;

	toplam = 29 * (gb2 - gb1) + 3 * (dk2 - dk1);
	odenecek = toplam + 150;

	printf("Odenecek Tutar: %d", odenecek);

	return 0;
}