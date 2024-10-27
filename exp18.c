//This code is to find that given character is alphabetor not.
#include<stdio.h>
int main()
{
    char a;
    printf("Enter the character:-");
    scanf("%c",&a);

    if(65<=a&&a<=90 || 97<=a&&a<=122)
    {
        printf("given character is an alphabet");
    }
    else 
    {
        printf("given character is not an alphabet");
    }
    
    return 0;
}