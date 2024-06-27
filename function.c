//user defined functions
#include <stdio.h>
#include <math.h>

void rectangle(int width, int lenghth){
     
     int square = width * lenghth;
     int perimeter = width + lenghth;
     printf("The area of the rectangle is %d and the perimeter of the rectangle is %d", square, perimeter);


}

int main(){
    rectangle(40, 10);

    return 0;
}