#include <stdio.h>
int desum = 3;
int asum = 6;
int main() {

    for (int i = 1; i<6; i++){
        for (int j = 1; j<asum; j++){
            printf("%d ", j);
        }
        printf("\n");
        asum = asum - 1;
        
    }



    for (int i = 1; i<5; i++){
        for (int j = 1; j<desum; j++){
            printf("%d ", j);
        }
        printf("\n");
        desum = desum + 1;
        
    }
}