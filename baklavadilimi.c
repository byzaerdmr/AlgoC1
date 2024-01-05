#include<stdio.h>
int main(){
	
	int i,j,first;  // i ayna kısmına kadar olan satır;; j satırdaki boşluk ve yıldız sayılarını kontrol ediyor
	printf("Please enter a number:\n ");
	scanf("%d",&first);
	
	for (i=1;i<=first;i++)
	{	
		for (j=1;j<=first-i;j++){  //baştaki boşluğu oluşturmak için 
			printf(" ");
		
		}
		
		for (j=1;j<=2*i-1;j++){
			printf("*");
		}
		printf("\n");
	}
	
	for (i=1;i<=first;i++){
		
		for (j=1;j<=i;j++){
			
			printf(" ");
			
		}
		for (j=1;j<=(2*first-2*i-1);j++){
			
			printf("*");
		}
		
		printf("\n");
	}
	
	return 0;
}
