//print 1-2+3-4+5-6+7-8+9-10...n
#include<stdio.h>

int main()
{
    int n,sum1=0,sum2=0;

    printf("Enter a number:-");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        if(i%2==0) 
        {
            printf(" - %d", i);
            sum1=sum1+i;
        }
        else  
        {
            if (i!=1) 
            {
                printf(" + ");
            }
            printf("%d", i);
            sum2 = sum2 + i;
        }
    }

    printf("\nSum=%d",sum2-sum1);

    return 0;
}
