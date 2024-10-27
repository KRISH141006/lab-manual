//enter a character and print it is vowel or consonent
#include<stdio.h>
int main()
{
    char alphabet;

    printf("Enter a alphabet (a-z):-");
    scanf("%c",&alphabet);
    
    if(alphabet=='a' ||alphabet=='e' ||alphabet=='i' ||alphabet=='o' ||alphabet=='u')
    {
      printf("alphabet entered by you is a vowel");
    }
    else
    {
      printf("alphabet entered by you is a consonant");
    }
    
    return 0;
}
