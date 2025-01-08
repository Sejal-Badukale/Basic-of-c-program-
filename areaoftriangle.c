//area of triangle, A = ½ base * height
#include<stdio.h>
int main(){
int b,h;
float A;
printf("Enter base of triangle=");
scanf("%d",&b);
printf("Enter height of triangle=");
scanf("%d",&h);
A=0.5*(b*h);
printf("Area of Triangle %f", A);
return 0;
}


