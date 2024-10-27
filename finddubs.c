#include<stdio.h>

int main()
{
    int n,counter,re;
    printf("Enter how many numbers you need in array:-");
    scanf("%d",&n);
    float a[n],t[n];
    printf("Enter the numbers in array:-");
    for(int i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }

    for(int i=0;i<n;i++)
    {
            if(t[i]==1)
            {
                continue;
            }
         counter=1;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
               t[j]=1;
               re=a[i];
               counter++;    
            }
        }
        if(counter>1)
    {
        printf("\n%d is repeated %d times",re,counter);
    }
    }
    if(counter==1)
    {
        printf("no duplicate found");
    }
    

    return 0;
}