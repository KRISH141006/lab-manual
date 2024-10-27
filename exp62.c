// printing sum of factorial numbers
#include<stdio.h>
int main()
{
    double fac=1,sum=0;
    int n;
    printf("Enter the number:-");
    scanf("%d",&n);

    int i=1;
    
    do{
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
    }while(i<=n);
    printf("\nsum is :%lf",sum);    
    return 0;
}