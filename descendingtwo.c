// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
int sum = 2;
int main() {

    for (int i = 1; i<6; i++){
        for (int j = 1; j<sum; j++){
            printf("%d ", j);
        }
        printf("\n");
        sum = sum + 1;
        
    }
}