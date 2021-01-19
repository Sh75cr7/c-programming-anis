#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any letter");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
        printf("The capital letter");

    else if(ch>='a'&&ch<='z')
        printf("the small letter");

    else
        printf("not a letter");


    return 0;
}
