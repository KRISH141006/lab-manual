// print factorial
#include<stdio.h>
int main()
{
    double fac=1,sum=0;
    int n;
    printf("Enter the number:-");
    scanf("%d",&n);

    int i=1;
    while(i<=n)
    {
        fac*=i;
        sum=sum+fac;
        if(i==n)
        {
            printf("%lf",fac);
        }
        else
        {
         printf("%lf+",fac);
    
        }
        i++;
    }
    printf("\nsum is :%lf",sum);
    
    return 0;
}