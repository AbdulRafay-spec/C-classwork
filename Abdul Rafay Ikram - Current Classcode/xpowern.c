#include <stdio.h>

int power(int num, int exp){
    if (exp == 1){
        return num;
    }

    if (exp == 0){
        return 1;
    }

    return num * power(num, exp);
}




int main(){
    int base, exp;
    long long result = 1;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);
    for (int i = 0; i < exp; i++){
        result *= base;
    }

    printf("%d %d %d\n", base, exp, result);
    return 0;
}