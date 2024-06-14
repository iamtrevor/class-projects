//a program to give a discount of 10% if amount of items purchased exceeds is sh5000

#include <stdio.h>
int main() {
    float discount, amount, price;
    printf("Enter the amount \t");
    scanf("%f", &amount);

    if (amount < 5000){
        discount = 0.1 * amount;
        printf("The discount is%.2f\n", discount);
        price = amount - discount;
        printf("The amount is %f", price);
    }
    else{
    discount = 0.2 * amount;
    printf("the discount is %.2f\n", discount);
    price = amount - discount;
    printf("The price is %f", price);
}
    return 0;
}