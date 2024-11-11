#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of array length :-");
    scanf("%d",&n);
    float a[n],t;

    for(int i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%f",&a[i]);
    }

    if(n%2!=0)
    {
        for(int i=0,j=n-1;i<(n-1)/2,j>(n-1)/2;i++,j--)
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t; 
        }
    }
    else
    {
        for(int i=0,j=n-1;i<(n)/2,j>(n)/2;i++,j--)
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t; 
        }
    }
    
    for(int i=0;i<n;i++)
    {
        printf("\na[%d]=%f",i,a[i]);
    }

 return 0;
    
}