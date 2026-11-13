// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int main(){
    int i;
    int m[10];
    int a[10];

    for(i=0; i<10; i++){
        scanf("%d", &a[i]);
    }

    for(i=0; i<10; i++){
        printf("%d", m[i]);
    }
    printf("\n");
    return 0;
}