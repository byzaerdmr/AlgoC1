 // Passing arrays and individual array elements to functions.
 #include <stdio.h>
 #define SIZE 5

 
 void modifyArray(int b[], int size); 
 void modifyElement(int e);


 int main(void) {
 int a[SIZE] = {0, 1, 2, 3, 4}; 

    puts("Effects of passing entire array by reference:\n\nThe values of the original array are:");

    for (int i = 0; i < SIZE; ++i) { 
    printf("%3d", a[i]);

 } 

    modifyArray(a, SIZE); // pass array a to modifyArray by reference
    puts("\nThe values of the modified array are:");
    for (int i = 0; i < SIZE; ++i) {
     printf("%3d", a[i]);
    
 } 

     printf("\n\n\nEffects of passing array element " "by value:\n\nThe value of a[3] is %d\n", a[3]);
     modifyElement(a[3]); // pass array element a[3] by value
     printf("The value of a[3] is %d\n", a[3]);

        return 0;
}

    // in function modifyArray, "b" points to the original array "a" in memory
    void modifyArray(int b[], int size) { 
     for (int j = 0; j < size; ++j) {
     b[j] *= 2; // actually modifies original array
 } 

} 

    // in function modifyElement, "e" is a local copy of array element
    void modifyElement(int e) { 
     e *= 2; 
     printf("Value in modifyElement is %d\n", e);
} 

