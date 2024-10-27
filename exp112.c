/*print pattern
5 
54 
543 
5432 
54321
*/
#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of rows:-");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=n-i+1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    
    return 0;
}