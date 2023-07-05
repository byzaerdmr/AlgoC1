#include<stdio.h>
void rectangle(int uzun, int kýsa) {
	int i, j;
	for (i = 0;i < kýsa;i++) {
		for (j = 0;j < uzun;j++) {
			if (i == 0 || j==uzun-1 || j == 0 || i == kýsa - 1) {

				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}
}
int main()
{
	int kisa, uzun;
	printf("Degerleri Giriniz: ");
	scanf("%d%d", &kisa, &uzun);
	rectangle(kisa, uzun);

	return 0;
}
/*
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
	int kýsa, uzun;
	printf("Dikdortgenin kenar uzunluklarini giriniz:");
	scanf("%d%d", &kýsa, &uzun);
	printf("\n\n\n\n\t\t");
	dortgen(kýsa, uzun);
	return 0;
}*/