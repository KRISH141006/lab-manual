//print 1 to n
#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number:-");
    scanf("%d",&n);

    int i=1;
    do{
        if(i%2==0)
        {
             printf("\n%d",i);
        }
        i++;
    }while(i<=n);
    
    return 0;
}