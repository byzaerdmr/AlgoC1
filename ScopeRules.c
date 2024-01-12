#include<stdio.h>

void useLocal(void);
void useStaticLocal(void);       //function prototypes
void useGlobal(void);
void abc(void);

int x = 1; //global variable

int main(void){
    
    int x = 5; // local variable to main
    printf("local x in outer scope of main is %d\n", x);

    { //new scope
        int x = 7;
        printf("local x in inner scope of main is %d\n", x);
    } //end of scope

    printf("local x in outer scope of main is %d\n", x);

    useLocal(); // has automatic local x
    useStaticLocal(); // has static local x
    useGlobal(); // uses global x
    useLocal(); // reinitialize automatic local x
    useStaticLocal(); // static local x retains its previous value
    useGlobal(); // global x also retains its value
    printf("\nlocal x in main is %d\n", x);
    abc();
}

void useLocal(void) {

    int x = 25; // it is used each time useLocal is called
    printf("\nlocal x in useLocal is %d after entering useLocal\n", x);
    ++x;
    printf("local x in useLocal is %d before exiting useLocal\n", x);
}

void useStaticLocal(void) {
    
    static int x = 50; //it has the same value the last time it runs
    printf("\nlocal static x is %d on entering useStaticLocal\n", x);
    ++x;
    printf("local static x is %d on exiting useStaticLocal\n", x);
}

void useGlobal(void){
    
    printf("\nglobal x is %d on entering useGlobal\n",x);
    x *= 10;
    printf("global x is %d on exiting useGlobal\n",x);
}

void abc(void){

    printf("myf x is %d", x);

}
