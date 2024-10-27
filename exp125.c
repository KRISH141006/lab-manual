#include<stdio.h>

int main()
{
    int r,c;
    printf("Enter the no. of rows for 2d array :- ");
    scanf("%d",&r);
    printf("Enter the no. of cols :- ");
    scanf("%d",&c);

    int a[r][c];
    int b[r][c];
    int d[r][c];
    printf("Enter elements in Array1 : \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Enter elements in Array2 : \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            d[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("sum of the 2 matrices : \n");
     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d",a[i][j]);
            printf("\t");
            
        }
        printf("\n + ");
        for(int k=0;k<c;k++)
        {
            printf("%d",b[i][k]);
            printf("\t");

        }
        printf(" = ");
        for(int l=0;l<c;l++)
        {
            printf("%d",d[i][l]);
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}
   
