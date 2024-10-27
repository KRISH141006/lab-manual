#include<stdio.h>

int main()
{
    int n[5];
    printf("Enter the number:-");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&n[i]);
    }
    printf("numbers in array");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",n[i]);
    }
    
    return 0;
}