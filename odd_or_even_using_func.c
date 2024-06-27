// a program to check if a number is odd or even
#include <stdio.h>

const char * odd_or_even(int num); // prototype

int main() {
    const char * result;
    int num, number;
    
    printf("Enter a number");
    scanf("%d", &num);
    result = odd_or_even(num);
    printf("The number is %d is %s\n", num, result);
    return 0;
}

const char * odd_or_even(int num){
    
    if(num % 2 == 0){
        return  "Even";
    }
    else{
        return "Odd";
    }

    

}