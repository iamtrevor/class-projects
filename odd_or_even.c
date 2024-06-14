//write a program to determine if a number is odd or even
#include <stdio.h>
int main() {
    int a;
    a = a++; 
    printf("Check if odd or even");
    scanf("%d", &a);

    if (a%2 == 0){
        printf("It is an even number");
    }
    else{
        printf("It an odd number");
    }
   return 0;
}
