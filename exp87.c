//print product of the number
#include<stdio.h>
int main()
{
    int n,p=1,r;
    printf("Enter the number:-");
    scanf("%d",&n);

    for(;n>0;)
    {
        r=n%10;
        n=n/10;
        p=p*r;
    }

    printf("product of the each digit of number : %d",p);

    
    return 0;
}