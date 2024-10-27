// print factorial
#include<stdio.h>
int main()
{
    double fac=1;
    int n;
    printf("Enter the number:-");
    scanf("%d",&n);


    for(int i=1;i<=n;i++)
    {
        fac*=i;
    }
    printf("\nfactorial is :%lf",fac);
    
    return 0;
}