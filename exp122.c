#include<stdio.h>

int main()
{
    int n;
    printf("Enter how many numbers you want in array :-");
    scanf("%d",&n);

    float a[n],b[n];

    for(int i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%f",&a[i]);
    }

    for(int i=0,j=n-1;i<n,j>=0;i++,j--)
    {
        b[i]=a[j];
    }

    printf("reverse of an array :\n");
    for(int i=0;i<n;i++)
    {
        printf("a[%d]=%f\n",i,b[i]);
    }
}