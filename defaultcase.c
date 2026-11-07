#include <stdio.h>
int day;
int main(void){
    scanf("%d", &day);
    switch(day){
        case 1:
        printf("Monday");
        break;

        case 2:
        printf("Tuesday");
        break; 

        case 3:
        printf("Wednesday");
        break; 

        default:
        puts("Invalid");
        break;
    }

}