#include <stdio.h>
int n; 
int main(void){
    scanf("d%", &n);
    switch (n % 2 == 0){
        case 1:
        puts("EVEN");
        break;

        case 0:
        puts("ODD");
        break;
    }

    return 0;
}