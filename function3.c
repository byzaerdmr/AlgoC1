#include<stdio.h>/*int cube(int a) {
	int c;
	c = a * a * a;
	return c;
}
int main() {
	int num;
	printf("Enter a number:");
	scanf("%d", &num);
	
	printf("This number's cube: %d",cube(num));
	return 0;
}*/


void dortgen(int kisa, int uzun) {
	int i, j;
	for (i = 0; i < kisa; i++)
	  {

		for (j = 0;j < uzun;j++) 
		{
			printf("*");
		}
		printf("\n\t\t");
	}

}
int main() {
	int kısa, uzun;
	printf("Dikdortgenin kenar uzunluklarini giriniz:");
	scanf("%d%d", &kısa, &uzun);
	printf("\n\n\n\n\t\t");
	dortgen(kısa, uzun);
	return 0;
}