#include <stdio.h>

int main(){

int i,j,n;

    printf("enter a lenght: ");
    scanf("%d", &n);

    for(i=0;i<=n;i++){

    for(j=0;j<=i;j++){
        printf("*");
    }

        printf("\n");
    }

    return 0;
}


//ters dik üçgen

/*
int main() {
	int i,j,n;

    printf("enter a lenght: ");
    scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		
	for(j=n;j>=i;j--){
		printf("*");
	}
	printf("\n");
	
	}
	
	
	return 0;  }   */
