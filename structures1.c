#include <stdio.h>
#include <string.h>

struct student{
        char firstName[20];
        char lastName[20];
        char email[50];
        char dob[50];
        int phone_number;
        int age;
        float gpa; 
}student1;

int main(){
    
    
    strcpy(student1.firstName, "Trevor");
    strcpy(student1.lastName, "Gachagua");
    strcpy(student1.email,"trevor.k.gachagua@gmail.com");
    strcpy(student1.dob,"07-01-2005");
    student1.phone_number = 0734556102;
    student1.gpa = 4.5;


    //print the variables
    printf("His first name is %s and last name is %s\n", student1.firstName, student1.lastName);
    printf("His email address is %s\n", student1.email);
    printf("He was born on %s\n", student1.dob);
    printf("His phone number is %d\n", student1.phone_number);
    printf("He has a gpa of %.2f", student1.gpa);
    return 0;
}
