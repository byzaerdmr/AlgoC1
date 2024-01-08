#include<stdio.h>
#include<stdlib.h>

int main(){

int sayi, i ,j;
printf("Enter a number: ");
scanf("%d",&sayi);

for(i=1;i<=2*sayi-1;i++){

    for(j=1;j<=2*sayi-1;j++){

       if(j==i)
       printf("*");

       else if(j==2*sayi-i)
         printf("*");
    
         else 
         printf(" ");
    }
    printf("\n");
} 

  return 0; 
}
