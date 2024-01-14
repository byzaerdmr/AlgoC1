/*#include<stdio.h>
int main(){
	int i,n,factorial=1;
	printf("please enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	factorial=i*factorial;

	}
		printf("factorial of %d : %d", n,factorial);
	
	
	return 0;
}*/
 #include <stdio.h>

// Faktöriyel hesaplayan fonksiyonun prototipi
unsigned long long int factorial(int number);

int main(void) {
    // 0'dan 21'e kadar olan sayıların faktöriyellerini hesapla ve ekrana yazdır
    for (int i = 0; i <= 21; ++i) {
        printf("%d! = %llu\n", i, factorial(i));
    }
    
    return 0;
}

// Faktöriyel hesaplayan rekürsif fonksiyonun tanımı
unsigned long long int factorial(int number) {
    if (number <= 1) {
        // Temel durum: 0! ve 1! her zaman 1'dir.
        return 1;
    } else {
        // Recursive adım: number! = number * (number - 1)!
        return (number * factorial(number - 1));
    }
}

