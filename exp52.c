//print n to 1
#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number:-");
    scanf("%d",&n);

    int i=n;
    do{
      printf("\n%d",i);
      i--;
    } while(i>=1);
    
    return 0;
}