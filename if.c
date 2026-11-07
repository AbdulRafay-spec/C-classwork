#include <stdio.h>
#include <math.h>

int main(void){
    int k, n, factor_a, factor_b;
    scanf("%d", &n);
    scanf("%d", &k);
    int factor_count = 0;
    
    for (int i = 0; i <= n; i++){
        if (n % i == 0){
            factor_count = factor_count + 2; 
            printf("%d ", i);
        }
    }


    



}