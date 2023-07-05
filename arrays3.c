#include<stdio.h>
#include<stdlib.h>
int main(){ 
int i;
int array[50];
for(i=0;i<50;i++){
 array[i]=i; }
for(i=0;i<50;i++){

printf("array: %d\n", array[i]);  }

return 0;
}
 /*
 #include <stdio.h>

int main(void)
{
  int idizi[10];
  int id;

  // Dizinin elemanlarýna 1-10 arasýndaki deðerleri sýra ile atama
  for (id=0; id<10; id++) {
       idizi[id] = id+1;
  }

  // Dizi deðerlerini ekrana yazma
  for (id=0; id<10; id++) {
       printf("%d ", idizi[id]);
  }

  return 0;
}
*/
