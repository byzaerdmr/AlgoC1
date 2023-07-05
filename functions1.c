#include<stdio.h>
#include<stdlib.h>

int prime_number(int number){
	
	int i;
	for(i=2;i<number;i++){
		
		if(number%i==0)
		return 0;
		}
	return 1;	
}

int main(){
	
	int number;
	printf("please enter a number: ");
	scanf("%d", &number);
	if(number<2) {
		printf("invalid value!");
		
	}
	else if(prime_number(number)==0){
	
	printf("this number is not prime");   }
    
	else{

	printf("this number prime number");  }
	
	
		return 0;
}
