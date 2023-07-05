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


