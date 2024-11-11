#include <stdio.h>

int det(int r,int a[r][r]);

int main() 
{
    int r;
    printf("Enter the number of rows/cols :-");
    scanf("%d",&r);

    int a[r][r]; 

    printf("Enter the elements in the array:\n");
    for (int i=0;i<r;i++) 
    {
        for (int j=0;j<r;j++) 
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    int determinant=det(r,a);
    printf("The determinant of the matrix is: %d\n", determinant);

    return 0;    
}

int det(int r,int a[r][r]) 
{
    if (r==1) 
    {
        return a[0][0];
    } 
    else if (r==2) 
    {
        return (a[0][0]*a[1][1])-(a[0][1]*a[1][0]); 
    } 
    else 
    {
        int sum=0;
        for (int i=0;i<r;i++) 
        {
            int submatrix[r-1][r-1];
            for (int j=1;j<r;j++) 
            {
                int subcol=0;
                for (int k=0;k<r;k++) 
                {
                    if (k==i)
                    {
                        continue; 
                    }
                    submatrix[j-1][subcol++] = a[j][k];
                }
            }
            sum=sum+(i%2==0?1:-1)*a[0][i]*det(r-1,submatrix);
        }
        return sum;
    }
}
