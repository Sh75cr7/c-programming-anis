//how to swap two numbers with temportaray//
#include<stdio.h>
int main()
{
    int num1=10;
    int num2=20;
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;

    printf("num1=%d\n",num1);
    printf("num2=%d\n", num2);
    return 0;
}
