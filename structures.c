/*name = Trevor
date = 7th July*/

#include <stdio.h>
#include <string.h>

struct nameStruct {
       int age;
       float salary;
       char name[50];
}nameStruct1;

int main() {
    // assigning the variable name
    strcpy(nameStruct1.name, "Mark muya");
    nameStruct1.salary = 3000;
    nameStruct1.age = 20;


    //print out the variables
    printf("The name is %s\n", nameStruct1.name);
    printf("He earns %.2f\n",nameStruct1. salary);
    printf("He is %d\n", nameStruct1.age);



    return 0;

}




