#include <stdio.h>

// Fibonacci fonksiyonunun prototipi
unsigned long long int fibonacci(int n);

int main(void) {
    // 0'dan 10'a kadar olan Fibonacci sayılarını hesapla ve ekrana yazdır
    for (int number = 0; number <= 10; number++) {
        printf("Fibonacci(%d) = %llu\n", number, fibonacci(number));
    }

    // 20, 30 ve 40. Fibonacci sayılarını hesapla ve ekrana yazdır
    printf("Fibonacci(20) = %llu\n", fibonacci(20));
    printf("Fibonacci(30) = %llu\n", fibonacci(30));
    printf("Fibonacci(40) = %llu\n", fibonacci(40));

    return 0;
}

// Fibonacci fonksiyonu
unsigned long long int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        // Fibonacci dizisinin her elemanı, önceki iki elemanın toplamıdır
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
