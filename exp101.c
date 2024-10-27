/*print pattern
01010 
01010 
01010 
01010 
*/
#include<stdio.h>

int main()
{
    int r,c;
    printf("Enter the number of rows:-");
    scanf("%d",&r);
    printf("Enter the number of rows:-");
    scanf("%d",&c);

    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        { 
            if(j%2!=0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
            
        }
        printf("\n");
    }
    

    
    return 0;
}