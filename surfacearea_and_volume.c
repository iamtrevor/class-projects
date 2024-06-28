//a pragram to calculate both the volume and surface area of a cylinder
#include <stdio.h>

float surfaceArea(float radius, float height);
float volume(float radius, float height);

int main(){
    //to find surface area
    float radius, height,s_a, PI, vol;
    printf("To find the surface area of the cylinder enter the value of radius and height/n");
    scanf("%f%f", &radius, &height);
    s_a = surfaceArea(radius, height);
    printf("The surface area of the cylinder with a radius of %f and height of %f is %f/n", radius, height, s_a);
    
    //to find volume
    printf("To find the volume of the cylinder enter the value of radius and height/n");
    scanf("%f%f", &radius, &height);
    vol = volume(radius, height);
    printf("The volume  of the cylinder with a radius of %f and height of %f is %f/n", radius, height, vol);


    return 0;
}

float surfaceArea(float radius, float height){
      
      float PI = 3.14;
      float s_a = 2*(PI * radius * radius) + (PI * (radius + radius) * height);
      return s_a;
}
      
float volume(float radius, float height){
      float PI = 3.14;
      float vol = PI * radius * radius * height;
      return vol;

}







