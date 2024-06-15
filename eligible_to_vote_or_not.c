//program to check if one is eligible to vote
#include <stdio.h>
int main(){
    int age, annual_salary;

    printf("Please enter your age");
    scanf("%d", &age);

    printf("Enter your annual salary");
    scanf("%d", &annual_salary);

    if(age >= 18 && annual_salary > 21000){
        printf("you are eligible to vote");
    }  
    
    else{
        printf("you are not eligible to vote");
    }

    return 0;
}