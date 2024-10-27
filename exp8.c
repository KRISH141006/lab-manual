//calculating area of triangle and circle
#include <stdio.h>
int main()
{
 float r,area,a,b,h; 

 printf("Enter the radius:-");
 scanf("%f",&r);
 area = 3.14*r*r;

 printf("Enter the value of base:-");
 scanf("%f",&b);

 printf("Enter the value of h:-");
 scanf("\n%f",&h);
 a=(b*h)/2;  

 printf("area of the circle is= %f",area);
 printf("\narea of the triangle is=  %f",a);

    return 0;
}