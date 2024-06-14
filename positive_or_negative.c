//program to check if a number is positive or negative
#include <stdio.h>
int main() {
    int a, b;
    a = a++;
    printf("Enter the value of a");
    scanf("%d", &a);
    
    if (a < 0){
        printf("the number is a negative number");
    }
    else{
        printf("The number is a positive number");
    }
    return 0;
}


