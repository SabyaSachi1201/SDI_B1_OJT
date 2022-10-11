#include<stdio.h>
void main()
{
    char letter;
    printf("Enter the letter in lowercase");
    scanf("%c",&letter);
    if(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u')
    {
        printf("%c is vowel",letter);
    }
    
    else
    {
        printf("%c is consonant",letter);

    }
}