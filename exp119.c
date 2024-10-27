#include<stdio.h>

int main()
{
    int n;
    printf("Enter how many numbers you want in array:-");
    scanf("%d",&n);
    float a[n],b[n];
    printf("enter the numbers in a array:-");
    for(int i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    printf("\nnumbers in a array : ");
    for(int i=0;i<n;i++)
    {
        printf("\na[%d]=%f",i,a[i]);
    }

    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    printf("\narrays in b array : ");
     for(int i=0;i<n;i++)
    {
        printf("\nb[%d]=%f",i,b[i]);
    }



    
    return 0;
}