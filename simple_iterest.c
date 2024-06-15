// program to calculate simple interest
#include <stdio.h>
int main() {
    int principal_amount, time;
    float rate, simple_interest;
    

    printf("Enter the principal amount");
    scanf("%d", &principal_amount);

    printf("Enter the rate");
    scanf("%f", &rate);

    printf("Enter the time(In months)");
    scanf("%d", &time);
    
    simple_interest = (principal_amount * time * rate) / 100;
    printf("The simple interest is %f/n", simple_interest);
     
    return 0;
}