//Verifying the formula l=(c+d)*(g+h)
#include<stdio.h>
int main()
{
    float l,c,d,g,h;
    printf("Enter the value of c:-");
     scanf("%f",&c);

    printf("Enter the value of d:-");
     scanf("\n%f",&d);

    printf("Enter the value of g:-");
     scanf("\n%f",&g);

    printf("Enter the value of h:-");
     scanf("\n%f",&h);

    l=(c+d)*(g+h);

    printf("l is=%f",l);
    
    return 0;
}