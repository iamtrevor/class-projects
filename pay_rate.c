// program to calculate pay rate

#include <stdio.h>
int main() {
    int hours = 6;
    int days = 6;
    int total_pay = hours* days * 1500;
    

    if(hours < 40){
       printf("The total pay is %d", total_pay);
    }

    else{
        total_pay = 1.5 * total_pay;
        printf("The total pay is %d", total_pay);
    }


  return 0;
}
