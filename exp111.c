// printing pascal triangle

#include<stdio.h>

int c(int a,int b);
int fac(int n);
int main()
{
    int n;
    printf("Enter the number of rows:-");
    scanf("%d",&n);


    for(int i=0;i<n;i++)
    {
      for(int j=1;j<=n-i;j++)
      {
         printf(" ");
      }
     for(int k=0;k<=i;k++)
     {
      printf("%d ",c(i,k));
     }
      printf("\n");
    }
    
    return 0;
}
 int c(int a,int b)
    {
        return fac(a)/(fac(b)*fac(a-b));
    }

    int fac(int n)
    {
      int fact=1;
        for(int i=1;i<=n;i++)
      {
         fact=fact*i;
      }
      return fact;
    }
   
