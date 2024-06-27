// program to calculate the volume of a sphere
#include <stdio.h>

          
float sphere_volume(float radius); //prototype          

int main(){
   
    
    float radius,volume;
    
    printf("Enter the radius");
    scanf("%f", &radius);

    volume = sphere_volume(radius);
    
    printf("The volume of the sphere is %f", volume);

    return 0;
}    

float sphere_volume(float radius){
      const float pi = 3.14;
      float volume;
      volume = (4.0 /3.0) * pi * radius * radius * radius;
      return volume;
}