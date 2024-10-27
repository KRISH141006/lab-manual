#include<stdio.h>

int main()
{
   float a[1000],sum=0,n;
    printf("how many numbers of sum do you want:-");
    scanf("%f",&n);
    printf("\nEnter the number:-");
    for(int i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];   
    }
        printf("%f",sum);
    
    return 0;
}