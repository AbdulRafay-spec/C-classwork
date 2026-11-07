#include <stdio.h> 
int prime(int n){
    if (n <= 1){
        return 0;
    }

    for  (int i = 2; i*i <= n; i++){
        if (n % i == 0){
            return 0; 
        }
    }
    return 1; 
}

int main(){
    int k;
    if (scanf("%d", &k ) == 1){
        if (prime(k)){
            printf("%d is prime\n", k);
        } else {
            printf("%d is not prime\n", k);
        }
    }
    return 0;
}