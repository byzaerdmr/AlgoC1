// Initializing the elements of an array to zeros.
 #include <stdio.h>
// function main begins program execution
int main(void) {
int n[5]; // n is an array of five integers

 // set elements of array n to 0 
 for (int i = 0; i < 5; ++i) { 
 n[i] = 0; // set element at location i to 0
 } 
 
 printf("%s%8s\n", "Element", "Value");

 // output contents of array n in tabular format
 for (int i = 0; i < 5; ++i) { 
 printf("%7d%8d\n", i, n[i]); 
 } 
return 0; 
 }

/*
#include <stdio.h>
#define SIZE 5 // maximum size of array

int main(void) {
 int s[SIZE] = {0}; // array s has SIZE elements
 for (int j = 0; j < SIZE; ++j) { // set the values
s[j] = 2 + 2 * j; } 
 printf("%s%8s\n", "Element", "Value");
// output contents of array s in tabular format
 for (int j = 0; j < SIZE; ++j) { 
 printf("%7d%8d\n", j, s[j]);
 } 
return 0; } 
*/
