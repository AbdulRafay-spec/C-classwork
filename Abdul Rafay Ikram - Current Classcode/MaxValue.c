#include <stdio.h>
#include <time.h>
#define MAX 20
int a[MAX];
int i, n;

int main(void){
    int max = a[0];
    for (i = 0; i < MAX; i++){
        a[i] = rand()%100;
    }
    for (n = 0; n < MAX; n++){
        if (a[n] > max){
            max = a[n];
        }   
    }
    printf("%d is the max", max);
    return 0;
}