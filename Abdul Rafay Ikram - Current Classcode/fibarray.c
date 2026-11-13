#include <stdio.h>

#define MAX 46

int main(void) {
    int fib[MAX];
    int n;

    // 1. Pre-calculate the entire Fibonacci sequence first
    fib[0] = 1;
    fib[1] = 1;
    for (int i = 2; i < MAX; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // 2. Ask the user for input and validate it
    printf("Enter an index (0 to %d): ", MAX - 1);
    if (scanf("%d", &n) == 1 && n >= 0 && n < MAX) {
        printf("%d\n", fib[n]);
    } else {
        printf("Invalid input. Please enter a number between 0 and %d.\n", MAX - 1);
    }

    return 0;
}
