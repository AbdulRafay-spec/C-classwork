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
    int thisNum;
    int thisExp;
    printf("Enter number: \n");
    scanf("%d", &thisNum);

    printf("Enter exponent: \n");
    scanf("%d", &thisExp);
    printf(thisNum, %d);
    printf(thisExp, %d)
    int answer = power(thisNum, thisExp);
    printf("Answer: %d", answer);

}