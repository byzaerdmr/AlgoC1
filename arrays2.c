#include<stdio.h>
#include<stdlib.h>
int main() {
	int array[100];
	int i,number;
	int sum;
	float average;
	sum=0;
	printf("Number of elements: ");
	scanf("%d",&number);
	for(i=0;i<number;i++){
		printf("%d. number: ",i+1);
		scanf("%d",&array[i]);
	}
	for(i=0;i<number;i++){
		printf("\n %d. number: %d \n",i+1,array[i]);
	}
	for(i=0;i<number;i++){
		sum=sum+array[i];
		average=sum/number ;
	}
	printf("\n Sum of array: %d \n", sum);
	printf(" Average of array: %f ", average);
	return 0;
}
