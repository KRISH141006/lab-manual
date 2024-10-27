//adding length and converted into meter and kilometer
#include<stdio.h>
int main()
{
    float length;
    printf("Enter the number in centimeter:-");
    scanf("%f",&length);

    printf("given length in meter is: %f\n",length/100);
    printf("given length in Kilometer is: %f\n",length/100000);
        
    return 0;
}