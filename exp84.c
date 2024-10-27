// print sum of factorial
#include<stdio.h>
int main()
{
    double fac=1,sum=0;
    int n;
    printf("Enter the number:-");
    scanf("%d",&n);


    for(int i=1;i<=n;i++)
    {
        fac*=i;
        sum=sum+fac;
        if(i==n)
        {
            printf("%lf",fac);
        }
        else
        {
         printf("%lf + ",fac);
    
        }
    }
    printf("\nsum is :%lf",sum);
    
    return 0;
}