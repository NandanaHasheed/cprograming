#include<stdio.h>
#define PI 3.14159
int main(){
 float a,b,c,areacircle, areacylinder;
 printf("Enter area of circle");
 scanf("%f",&a);
 printf("Enter area of cylinder");
 scanf("%f",&b);
 printf("Enter the height of cylinder");
 scanf("%f",&c);
 areacircle=PI*a*a;
 areacylinder=2*PI*b*(b+c);
 printf("Area of circle is %f",areacircle);
 printf("Area of cylinder is %f",areacylinder);
 return 0;
 }
