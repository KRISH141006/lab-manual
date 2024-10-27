// printing fibonaci series
#include<stdio.h>
int main()
{
    int n1=0,n2=1,n,sum=0;
    printf("Enter the number:-");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("%d\t",n1);
        sum=n1+n2;
        n1=n2;
        n2=sum;
    } 
    
    return 0;
}