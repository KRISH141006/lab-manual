 //Verifying the formula a=p*(1+(r/100)/n)-p
#include<stdio.h>
int main()
{
    float a,p,r,n;
    printf("Enter the value of p:-");
     scanf("%f",&p);

    printf("Enter the value of r:-");
     scanf("\n%f",&r);

    printf("Enter the value of n:-");
     scanf("\n%f",&n);

    a=p*(1+(r/100)/n)-p;
    printf("a is=%f",a);
    
    return 0;
}