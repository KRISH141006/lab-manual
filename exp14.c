//enter the number and print it is positive,negative or zero
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n:-");
    scanf("%d",&n);

    if(n>0)
    {
        printf("%d is greater than zero",n);
    }
   else if(n==0)
    {
        printf("%d is zero",n);
    }
    else
    {
    printf("%d is less than zero",n);
    }
    return 0;
}
