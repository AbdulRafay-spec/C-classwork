#include <stdio.h>
int fibonachi(int n){
    if (n==0 || n==1) return n;
    return fibonachi(n-1) + fibonachi(n-2);
}

int main(void){
    int fib4;
    int fib5;
    int fib6;
    scanf("%d", &fib4);
    scanf("%d", &fib5);
    scanf("%d", &fib6);
    printf("%d", fib4);
    printf("%d", fib5);
    printf("%d", fib6);
    
    

}