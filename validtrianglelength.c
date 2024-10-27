//enter the length of triangle and give triangle is valid or not
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the lengths of sides of the triangle...\n");
    printf("length of first side:-");
    scanf("%d",&a);
    printf("length of second side:-");
    scanf("%d",&b);
    printf("length of third side:-");
    scanf("%d",&c);

   if( a+b>c && a+c>b && b+c>a )
   {
    printf("its a valid triangle");
   }
   else 
   {
    printf("it is not a valid triangle");
   }
    
    return 0;
}