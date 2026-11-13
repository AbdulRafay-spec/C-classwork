#include <stdio.h>
int sumOfDigits(int n){
    if (n==0){
        return 0
    }
    return (n%10) + sumOfDigits(n/10);
}

int main(){
    int num, sum;
    printf("Enter an integer\n");
    scanf("%d", &num);
    int temp = num < 0 ? -num : num;
    sum = sumOfDigits(temp);
    printf("Sum of digits of = %d\n", sum);
    return 0;
}