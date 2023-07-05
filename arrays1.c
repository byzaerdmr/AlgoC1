#include<stdio.h>
#include<stdlib.h> /*
int main(){
	int numbers[]={1,2,3,4,5,6,7};
	int i, f=1;
	for(i=0;i<7;i++){
		f=numbers[i]*f;
	}
	printf("factorial: %d",f);
	
	return 0;
} */

int main(){
	char city[3][15];
	int i;
	for(i=0;i<=2;i++)
	{
		printf("Enter a %d. city: ",i+1);
		scanf("%s", &city[i]);		
	}
	printf("\n");
	for ( i= 0; i<3; i++)	{

	
      printf("%d. city :  %s\n",i+1,city[i]);
	
}  
return 0; } /*

