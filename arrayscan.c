#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int i;

int main(){
    int s,n;
    s=0;
    printf("How many elements in the array do you want: ");
    scanf("%d", &n);
    int m[n];
    for (i = 0; i<n; i++){
        m[i] = rand()%100;
        for(i=0; i<n; i++){
            printf("%d", m[i]);
            s=s+m[i];
        }
    }
    return 0;
}