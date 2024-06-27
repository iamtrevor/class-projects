//programm to find the product of two numbers
#include <stdio.h>
int product_of_two(int num1, int num2);

int main(){
    int  num1, num2, product;
  
    
    printf("Enter the  two numbers");
    scanf("%d %d", &num1, &num2);
    product = product_of_two(num1, num2);
    printf("The product of %d and %d is %d", num1, num2, product);
    
    return 0;
}

int product_of_two(int num1, int num2){
    return num1 * num2;
}
































