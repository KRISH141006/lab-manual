/*print pattern
5 
44 
333 
2222 
11111
*/
#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number:-");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",n-i+1);
        }
        printf("\n");
    }    
    return 0;
}
