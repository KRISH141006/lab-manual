//print numbers between n to 1
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:-");
    scanf("%d",&n);

    for(int i=n;i>=1;i--)
    {
        printf("\n%d",i);
    }
    
    return 0;
}