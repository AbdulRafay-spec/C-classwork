#include <stdio.h>
#include <math.h>

int main(void){
    float p, area, a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    p = (a+b+c)/2;
    area = sqrt(p * (p-c) * (p-a) * (p-b));
    printf("area: %f cm sqaure", area);

}