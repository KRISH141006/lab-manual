#include<stdio.h>
int main()
{
    int a[10],max,min;
    printf("enter any 10 numbers:-\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(int i=1;i<10;i++)
    {
        if(max<a[i])
        {
            max=a[i]; 
        }
          if(a[i]<min)
        {
           min=a[i];
        }
       
    }
    printf("maximum is=%d",max);
    printf("\nminimum is =%d",min);
    return 0;
}
