//finding lcm
#include<stdio.h>
int main()
{
    int n1,n2,n,lcm;
    printf("Enter the first number:-");
    scanf("%d",&n1);
    printf("Enter the second number:-");
    scanf("%d",&n2);

    if(n1>=n2)
    {
        lcm=n1;
    }
    else
    {
        lcm=n2;
    }

    for(;1;)
    {
       if(lcm%n1==0&&lcm%n2==0) 
       {
         printf("lcm is %d",lcm);
         break;
       }
       lcm++;
    }
   
    return 0;
}