//print numbers between 1 to n
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:-");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
         printf("\n%d",i);
    }
    
    return 0;
}