#include<stdio.h>
#include<stdlib.h>

int main(){

int h,i,j;
printf("Please enter a number:\n ");
scanf("%d",&h);

for(i=1;i<=h;i++){
        
     for(j=1;j<=i-1;j++){
     	printf(" ");
        }
     for(j=0;j<=2*h-2*i;j++){ // 0dan başladığı için yıldız sayısı 0 dahil olacak şekilde olur
     	printf("*");
        }
        printf("\n");
}
for(i=1;i<=h-1;i++){

        for(j=1;j<=h-i-1;j++){
        	printf(" ");
        }

        for(j=1;j<=2*i+1;j++){
        	printf("*");
        }
        printf("\n");
}

return 0;  }
