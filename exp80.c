#include<stdio.h>
#include<math.h>
int main()
{
    int n1,n2,r1,a,counter=0;
    double ans=0;


    printf("Enter the number:-");
    scanf("%d",&n1);
    n2=n1;
    a=n1;
   

    for(;n1>0;)
    {
        n1=n1/10;
        counter++;
    }
   
    for(;n2>0;)
    {
        r1=n2%10;
        n2=n2/10;
        ans = ans + pow(r1,counter);
    }
    printf("\n%lf",ans);
    printf("\n%d",counter);

    if (ans==a)
    {
        printf("\nARMSTRONG");
    }
    else
    {
        printf("\nNOT ARMSTRONG");
    }

    
    return 0;
}