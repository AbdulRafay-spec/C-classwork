#include <stdio.h>
int fibonachi(int n){
    if (n==0 || n==1) return n;
    return fibonachi(n-1) + fibonachi(n-2);
}

int main(void){
    //int fib4 fib5;
    //scanf("%d", &fib4);
    //scanf("%d", &fib4);
    //scanf("%d", &fib4);
   // int finalfib = fibonachi(fib4);
    //printf("%d is sequence", finalfib);
    //return 0;
    int n;

    printf("enter the number: ");
    scanf("%d", &n);
    for (int i = 1; i< n + 1; i++){
    printf("%d ", fibonachi(i));
}
return 0;
}