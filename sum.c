#include <stdio.h>

int main() {
    float a, b, c, sum;
    scanf(" %f %f %f", &a, &b, &c);
    sum = a + b + c;

    if (sum < 10) {
        printf("%.0f is less than 10\n", sum);
    } else {
        printf("%.0f is greater than 10\n", sum);
    }
    printf("Sum %.0f\n", sum);

    return 0;
}