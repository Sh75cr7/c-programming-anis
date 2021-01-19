#include<stdio.h>
int main()
{
    int num;
    printf("any number");
    scanf("%d",&num);
    if(num>0)
        printf("number is positive");
    else if(num<0)
        printf("number is negative");
    else
        printf("zero");


    return 0;
}
