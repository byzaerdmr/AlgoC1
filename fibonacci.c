#include<stdio.h>
#include<stdlib.h>
int main(){
	 int a=1,b=1,c,d,i;
	 printf("how many fibonacci numbers do you want?: ");
	 scanf("%d",&d);
	 printf("\n%d\n%d\n",a,b);
	for(i=1;i<=d;i++){
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
	}
	
	
	return 0;
}
