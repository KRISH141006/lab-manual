//calculate the interest
#include<stdio.h>
int main()
{
    float inte,p,r,n;

     printf("Enter the value of principle:-");
     scanf("%f",&p);

    printf("Enter the value of rate:-");
     scanf("\n%f",&r);

    printf("Enter the value of num. of year:-");
     scanf("\n%f",&n);
    
    inte=p*r*n/100;
    printf("interest is = %f",inte);
    return 0;
}