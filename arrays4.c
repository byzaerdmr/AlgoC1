#include<stdio.h>
#include<stdlib.h>
int main(){
	int array[100];
	int i,number,sum=0,average=0;
	printf("Number of elements: ");
	scanf("%d",&number);
	
	for(i=0;i<number;i++){
		printf("Please enter %d. element of array: ", i+1);
		scanf("%d", &array[i]);
			}
		for(i=0;i<number;i++){
		
		  sum=sum+array[i];  }
		  average=sum/number;
		  printf("sum= %d\n", sum);
		  printf("average= %d", average);
	return 0;
}
