//conversion of lowercase to uppercase with use with library function//
#include<stdio.h>
int main()
{
    char upper,lower;
    printf("enter any lowercase");
    scanf("%c",&lower);
    upper=toupper(lower);
    printf("uppercase letter=%c",upper);
}
