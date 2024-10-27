//print first and the last digit product
#include<stdio.h>
int main()
{
    int n,r1,r2,t=0;
    printf("Enter the number:-");
    scanf("%d",&n);

    for(;n>0;)
    {
        r1=n%10;
        n=n/10;
        t=t*10+r1;
    }
    printf("The first digit of the number is :  %d",r1);
    for(;t>0;)
    {
        r2=t%10;
        t=t/10;
    }
    printf("\nThe last digit of the number is : %d",r2);
    printf("\nThe product of the first and last digit is : %d",r1*r2);

    return 0;
}