#include<stdio.h>

int main()
{
   float a[1000],sum=0,n,max,min,t;
    printf("how many numbers of sum do you want:-");
    scanf("%f",&n);
    printf("\nEnter the number:-");
    for(int i=0;i<n;i++)
    {
      printf("a[%d]:-",i);
      scanf("%f",&a[i]);
    }


    for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<n;j++)
      {
        if(a[j]<a[i])
        {
          t=a[i];
          a[i]=a[j];
          a[j]=t;
        }
      }
    }
    printf("\nsorted array(Accending): ");
    for(int i=0;i<n;i++)
    {
      printf("\na[%d]=%f",i,a[i]);
    }
    for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<n+1;j++)
      {
        if(a[i]<a[j])
        {
          t=a[i];
          a[i]=a[j];
          a[j]=t;
        }
      }
    }

    printf("\nsorted array(Decending): ");
    for(int i=0;i<n;i++)
    {
      printf("\na[%d]=%f",i,a[i]);
    }
       
    return 0;
}