#include<stdio.h>

int main()
{
    int n,counter,repeatation=0;
    printf("Enter the array length :-");
    scanf("%d",&n);
    float a[n],t[n],re;
    for(int i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%f",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        t[i]=0;
    }

    for(int i=0;i<n;i++)
    {
        counter=1;
        if(t[i]==1)
        {
            continue;
        }
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                re=a[i];
                counter++;
                t[j]=1; 
                repeatation=1;   
            }

        } 
        if(counter>1)
        {
            printf("\n%f is repeating %d times",re,counter);
        } 
    }  
    if(repeatation==0)
    {
        printf("No repeatation");
    } 
       
    return 0;    
}