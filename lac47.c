//how to swap two num without temp//
#include<stdio.h>
int main()
{
    int num1=20;
    int num2=12;
    num1=num1-num2;//8
    num2=num1+num2;//20
    num1=num2-num1;//12
    printf("num1=%d\n",num1);
    printf("num2=%d\n",num2);
    return 0;
}
