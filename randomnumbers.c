#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/*#include<stdio.h>
#include<stdlib.h>
int main() {   //hep ayný sayýlarý veriyor
	int i;
	for (i = 1;i <= 20;i++) {

		printf("%10d", 1 + (rand() % 6));

		if (i % 5 == 0) {

			printf("\n");
		}
	}
	return 0;
}*/

/*int main() {
	int i; //farklý sayýlarý veriyor

	srand(time(NULL));
	for (i = 1;i <= 50;i++) {

		printf("%10d ", 1 + (rand() % 6));
		if (i % 5 == 0) {
			printf("\n");
		}
	}

	return 0;
}*/
void sayisal_loto() {
	int i;
	srand(time(NULL));
	
	for (i =1;i <= 50;i++) {
		
			printf("%10d", 1 + (rand() % 50));
			if (i % 5 == 0) {
				printf("\n");

			}
	}
}
int main() {
	sayisal_loto();
	return 0;
}

