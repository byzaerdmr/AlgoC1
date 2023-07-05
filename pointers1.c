#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
void swap(int*,int*);
void bubbleSort(int*, int);

int main(){
	int a[SIZE]= {3,45,65,62,12,38,21,5,7,81};
	int i;
	printf("Array in original order:\n");
	for(i=0;i<SIZE;i++)
		printf("%4d",a[i]);
	bubbleSort(a,SIZE);
		printf("\nArray in ascending order:\n");
	for(i=0;i<SIZE;i++)
		printf("%3d",a[i]);
	
return 0;
}
void bubbleSort(int *array, int size){
	int i,j;
	for(i=0;i<size-1;i++){
	for(j=0;j<size;j++){
		if(array[j]>array[j+1]){
			swap(&array[j],&array[j+1]);
		}
   	}
  }
}

void swap(int *ptr1, int *ptr2){
	int temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
}

/*

#include <stdio.h>

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 88, 76, 45};
    int n = 10;
    int i;

    printf("Dizinin sýralanmamýþ hali:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubbleSort(arr, n);

    printf("Dizinin sýralanmýþ hali:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}  */

