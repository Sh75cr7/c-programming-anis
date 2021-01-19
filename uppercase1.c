//conversion of uppercase to lowercase with use with library function//
#include<stdio.h>
int main()
{
    char upper,lower;
    printf("enter any uppercase");
    scanf("%c",&upper);
    lower=tolower(upper);
    printf("lowercase letter=%c",lower);
}
