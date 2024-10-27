#include<stdio.h>

int main()
{
    int n;float sum=0;
    printf("Enter how many numbers do you want in array:-");
    scanf("%d",&n);
    int a[n];

    printf("Enter numbers in array:-");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Even numbers are : \n");
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("a[%d]=%d\n",i,a[i]);
            sum=sum+a[i];
        }
    }

    printf("sum of these even numbers is : %f",sum);

    
    return 0;
}