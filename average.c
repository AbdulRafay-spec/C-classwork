#include <stdio.h>
float average, a, b, c;

int main(void){
    scanf("%f %f %f", &a, &b, &c);
    average = (a + b + c) / 3;
    printf("Average is %f", average); 
}
