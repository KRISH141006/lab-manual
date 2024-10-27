#include<stdio.h>

int main()
{
    int n,r,f;
     printf("Enter how many numbers in array:-");
     scanf("%d",&n);
    float a[n];
    printf("enter the numbers in array:-");
    for(int i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
   
    printf("Enter the number of rotation : ");
    scanf("%d",&r);
    for(int j=r;j>0;j--)
    {
         f=a[0];
        for(int i=0;i<n;i++)
        {
            a[i]=a[i+1];
            if(i==n-1)
            {
                a[n-1]=f;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("\n%f",a[i]);
    }

    



    return 0;
}