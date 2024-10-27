#include<stdio.h>

int main()
{
    int n,r,l;
     printf("Enter how many numbers in array:-");
     scanf("%d",&n);
    float a[n];
    printf("enter the numbers in array:-");
    for(int i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    l=a[n-1];
    printf("Enter the number of rotation : ");
    scanf("%d",&r);
    r=r%n;//additional

    for(int j=0;j<r;j++)
    {
        l=a[n-1];
        for(int i=n-1;i>=0;i--)
        {
            a[i+1]=a[i];
           if(i==0)
            {
                a[i]=l;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("\n%f",a[i]);
    }

    



    return 0;
}

/*
r=1

a[3]-->a[4]
a[2]-->a[3]
a[1]-->a[2]
a[0]-->a[1]
a[4]-->a[0]

*/







