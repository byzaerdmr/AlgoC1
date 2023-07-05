#include <stdio.h>
int main() {
	int i = 0;
	int price;
	int sumofprice=0;
    
	printf("Please enter price of product or enter 0 to finish: \n" );
	scanf ("%d", &price);

	while (price != 0) {
		sumofprice = sumofprice + price  ;
		i = i + 1;
		printf("Please enter price of product or enter 0 to finish \n");
		scanf ("%d", &price);
	}
	float average = sumofprice / i;
	printf("Average of price: %2.f", average);




	return 0;
}
/*int main(){

	int sayac = 0;
	int not;
	int toplamNot = 0;

	printf("Not'u giriniz, çıkmak için -1 yazın\n");
	scanf("%d",&not);

	while(not != -1){
		toplamNot = toplamNot + not;
		sayac = sayac + 1;
		printf("Not'u giriniz, çıkmak için -1 yazın\n");
		scanf("%d",&not);
	}
	
	float ortalama = toplamNot / sayac;
	printf("%d öğrencinin ortalaması %.2f\n",sayac,ortalama); // %.2f virgülden sonra 2 basamak yazdırmak için

	return 0;
}*/
