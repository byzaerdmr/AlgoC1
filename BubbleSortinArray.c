 // Sorting an array's values into ascending order.
 #include <stdio.h>
 #define SIZE 10

int main(void) {
int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37}; 
 
        puts("Data items in original order");
 
        // output original array
         for (int i = 0; i < SIZE; ++i) {
         printf("%4d", a[i]);
 }

           // bubble sort
            for (int pass = 1; pass < SIZE; ++pass) { 
            // loop to control number of comparisons per pass 
            for (int i = 0; i < SIZE - 1; ++i) { 
            // compare adjacent elements and swap them if first
            // element is greater than second element 

            if (a[i] > a[i + 1]) { 
            int hold = a[i]; 
            a[i] = a[i + 1]; 
            a[i + 1] = hold; 
        } 
    } 
 }


    puts("\nData items in ascending order");

    // output sorted array
    for (int i = 0; i < SIZE; ++i) {
    printf("%4d", a[i]);
 } 

    puts("");

    return 0;
}
