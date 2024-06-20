// a program to display electricity bills
#include <stdio.h>
int main() {
    int customerID, unit_consumed;
    float charges_per_unit, supercharge, price;
    char str[100];                              

    printf("Please enter customerID\n");
    scanf("%d", &customerID);

    printf("Please enter your name\n");
    scanf("%s", str);


    printf("Enter the unit consumed");
    scanf("%d", &unit_consumed);

    if(unit_consumed >= 100 && unit_consumed <= 199){
        charges_per_unit = unit_consumed * 1.20;
        price =  charges_per_unit;
        printf("The total price will be %.2f\n", price);
    }
    
    else if(unit_consumed >= 200 && unit_consumed < 400){
        charges_per_unit = unit_consumed * 1.50;
        price =  charges_per_unit;
        printf("The total price will be %.2f\n",price);
    }
    
    else if(unit_consumed > 400 && unit_consumed < 600){
        charges_per_unit = unit_consumed * 1.80;
        supercharge = 0.15 * unit_consumed;
        price = charges_per_unit + supercharge;
        printf("The total price will be %.2f\n", price);
    }
    
    else if (unit_consumed >= 600){
        charges_per_unit = unit_consumed * 2.00;
        supercharge = 0.15 * unit_consumed;
        price = charges_per_unit + supercharge;
        printf("The total price will be %.2f\n", price); 

    }
    
    else {
        printf("Sorry we connot allow you to buy less than 100 units");
    }

    return 0;
}



