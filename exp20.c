//enter the angle of triangle and give triangle is valid or not
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the angles...(Degree)\n");
    printf("length of first angle:-");
    scanf("%d",&a);
    printf("length of second angle:-");
    scanf("%d",&b);
    printf("length of third angle:-");
    scanf("%d",&c);

   if( a+b+c==180 )
   {
    printf("its a valid triangle");
   }
   else 
   {
    printf("it is not a valid triangle");
   }
    
    return 0;
}