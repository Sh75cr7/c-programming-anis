#include<stdio.h>//logical or||//
int main()
{
    char ch;
    printf("enter a letter");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        printf("vowel");
    else
        printf("consonent");


    return 0;
}
