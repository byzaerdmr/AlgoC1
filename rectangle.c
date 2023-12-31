#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,j,k,l;
	printf("kenar uzunluklarýný giriniz: ");
	scanf("%d  %d", &j, &k);
	for(i=1;i<=j;i++){
		
		for(l=1;l<=k;l++){
			printf("*");
			
		}
		printf("\n");
	}
	
	return 0;
}


