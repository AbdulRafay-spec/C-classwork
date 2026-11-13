#include <stdio.h>
#include <math.h>

int factorial(int n){
    if (n==1){
        return 1;
    }

    return n*factorial(n-1);
}

int main(void){
    //int factorial4 = factorial(4);
    //int factorial5 = factorial(5);
    //int factorial6 = factorial(6);

    //int factorial4;
    //int factorial5;
    //int factorial6;

    int factorial4 = scanf("%d", &factorial4);
    int factorial5 = scanf("%d", &factorial5);
    int factorial6 = scanf("%d", &factorial6);

    int factorial44 = factorial(factorial4);
    int factorial55 = factorial(factorial5);
    int factorial66 = factorial(factorial6);

    
    printf("factorial of 4 is: %d \n", factorial44);
    printf("factorial of 5 is: %d \n", factorial55);
    printf("factorial of 6 is: %d \n", factorial66);
}