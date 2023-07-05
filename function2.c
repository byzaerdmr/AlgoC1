#include<stdio.h>
int compute_sum(int n) {
	int sum,i;
	sum = 0;
	for (i ;i > 0;i--) 
		sum += i;
		printf("%d\n", i);
		return sum;
	

}
int main(void) {
	int a,sum;
	a = 5;
	printf("%d\n", a);
	sum = compute_sum(a);
	printf("%d\n", a);
	printf("%d\n", sum);

	return 0;
}
/*#include<stdio.h>
int toplam(int a, int b) {
	int top;
	top= a + b;
	return top;

}
int main() {
	int num1, num2;
	int sum;
	printf("Please enter two numbers\n");
	scanf("num1: %d\t num2:%d \n ", &num1, &num2);
	sum = toplam(num1, num2);
	printf("%d\n", sum);
	return 0;
}*/
