#include<stdio.h>
#include<stdlib.h>
int main(){

	int i=1,n=41,t=0;
	for(i;i<=n;i+=4){
		t=i+t;
	}
	printf("toplam: %d",t);
	
	return 0;
}
