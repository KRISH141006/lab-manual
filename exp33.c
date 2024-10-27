//print sum of the input digit
#include<stdio.h>
int main()
{
    int n,sum=0,r;
    printf("Enter the number:-");
    scanf("%d",&n);

    while(n>0)
    {
        r=n%10;
        n=n/10;
        printf("\n%d",r);
        sum=sum+r;
    }
    printf("\nsum is = %d",sum);

    return 0;
}