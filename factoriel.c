#include<stdio.h>
int main(){
	int i,n,factorial=1;
	printf("please enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	factorial=i*factorial;

	}
		printf("factorial of %d: %d", n,factorial);
	
	
	return 0;
}
