#include<stdio.h>

int main()
{
    int r1,c1,r2,c2;
    printf("Enter the no. of rows for 2d array :- ");
    scanf("%d",&r1);
    printf("Enter the no. of cols :- ");
    scanf("%d",&c1);

    int a[r1][c1];
    int b[r2][c2];
    int d[r1][c2];
    int e[r1][c2];
    printf("Enter elements in Array1 : \n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the no. of rows :- ");
    scanf("%d",&r2);
    printf("Enter the no. of cols :- ");
    scanf("%d",&c2);
    printf("Enter elements in Array2 : \n");
    
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    if(c1==r2)
    {
            for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                d[i][j]=a[i][j];
            }
        }

    }
    else
    {
        printf("multiplication can't happen,Try again");
    }
    
    return 0;
}

