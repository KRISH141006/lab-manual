//calculating the fahrenhit from input celcius
#include<stdio.h>
int main()
{
   float f,c;
   printf("Enter the value in degree celcius:- ");
   scanf("%f",&c);

   f=(c)*9/5+32;
   printf("F is %f",f);
   return 0;

}
