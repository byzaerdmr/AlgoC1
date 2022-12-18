#include<stdio.h>


  int main() {

	int sayac = 0;
	int numberofstudent = 5;
	int note;
	int sumofnote = 0;

	while (sayac < numberofstudent) {
		scanf("%d", &note);
		sumofnote = sumofnote + note;
		sayac = sayac + 1;
	}
	float average = sumofnote / numberofstudent;
	printf(" Average: %2.f  ", average );  




	return 0;
}  
