#include<stdio.h>
#include<stdlib.h>
/*
int main()  
{  
   int n;  
   int count=0;  
   printf("Enter a number: ");  
   scanf("%d",&n);  
   while(n!=0)  
   {  
       n=n/10;  
       count++;  
   }  
     
   printf("\nThe number of digits in an integer is : %d",count);  
    return 0;  
}  */
 /*
 int main(){
 	int n=20,i;
 	i=0;
 	while(i<=n){
 		if(i%7!=0)
 		printf("%d\n",i);
 		i+=2;
	 }

 	
 	return 0;
 } */
 
 int main(){
 	
 	int i,n,f=1;
 	printf("enter a number: ");
 	scanf("%d",&n);
 	i=1;
 	while(i<=n){
 		f=i*f;
 		i++;
	 }
 	printf("factorial of %d: %d",n,f);
 	
 	return 0;
 }
 
