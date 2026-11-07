#include <stdio.h>
#include <math.h>

int main(void){
    float x1, x2, a, b, c, dis;
    scanf("%f %f %f", &a, &b, &c);
    dis = (b*b)-(4*a*c);
    if (dis < 0){
        printf("Invalid choose a bigger value of b");
    } else {
        x1 = (-b + sqrt(dis)) / (2*a); 
        x2 = (-b - sqrt(dis)) / (2*a);
        printf("x1 = %f \n", x1);
        printf("x2 = %f", x2);
    }

}