#include<stdio.h>
int karesini_al(int x);
int num;
int main() {
	printf("plese enter a number: ");
	scanf("%d", &num);

	printf("Bu sayının karesi: %d\n", karesini_al(num));
	return 0;
}
int karesini_al(int x) {

	x *= x;
	return x;
}