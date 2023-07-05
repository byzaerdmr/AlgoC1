#include<stdio.h>
#include<stdlib.h>
/*
int main(){
	int i,j,n;  // dik kenar uzunluðu verilen dik üçgen çizme
	printf("enter a length: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		
		for(j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}*/
/*
int main(){  //ters dik üçgen
	
	int i,j,k;
	printf("enter a high: ");
	scanf("%d", &k);
	for(i=1;i<=k;i++){
		
		printf("**\n");
	}
		
		
	return 0;
}*/
int main(){
	int i,j,k,l;
	for(i=1;i<=5;i++){
		
		for(j=5;j>=i;j--){
			printf("*");
		}
		printf("\n");
	}
	
	for(k=1;k<=5;k++){
		
       for(l=1;l<=k;l++)
       {
       	printf("*");
	   }
	   printf("\n");
	}
	
	
	
	
	
	
	return 0;
}
