// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int f(int n){
    int a = n/10;
    int b = n%10;
    return a+b;
}

// void prime_or_not(int num){
 //   if (num == 2){
  //      printf("prime");
  //  } else if (num == 1){
 //       printf("not prime");
 //   } else if (num % 2 != 0)
    
//}


int main(void){
    int input;
    printf("Enter input: ");
    scanf("%d", &input);
    
    printf("%d is the sum of digits \n", f(input));
    return 0;
    
}