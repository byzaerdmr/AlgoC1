// Static arrays are initialized to zero if not explicitly initialized. normal dizi için geçerli değil
#include <stdio.h>

void staticArrayInit(void); 
void automaticArrayInit(void); 

 
 int main(void) {
 
    puts("First call to each function:");
    staticArrayInit(); 
    automaticArrayInit();

    puts("\n\nSecond call to each function:");  //static array değişen değerleri tutmaya devam ediyor.
    staticArrayInit(); 
    automaticArrayInit();
    puts("");

    return 0; 
 } 

    
    void staticArrayInit(void) {
 
    static int array1[3];
    puts("\nValues on entering staticArrayInit:");

   
     for (int i = 0; i <= 2; ++i) {
    printf("array1[%d] = %d ", i, array1[i]);
 } 
     
    puts("\nValues on exiting staticArrayInit:");
    for (int i = 0; i <= 2; ++i) {
    printf("array1[%d] = %d ", i, array1[i] += 5);
   } 
}
    
    void automaticArrayInit(void) {
 
    int array2[3] = {1, 2, 3};
    puts("\n\nValues on entering automaticArrayInit:");

    
    for (int i = 0; i <= 2; ++i) {
    printf("array2[%d] = %d ", i, array2[i]);
     } 

    puts("\nValues on exiting automaticArrayInit:");
    
    for (int i = 0; i <= 2; ++i) {
     printf("array2[%d] = %d ", i, array2[i] += 5);
     
     } 
  }
 
