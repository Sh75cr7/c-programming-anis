#include<stdio.h>
int main()
{
    int x, y;
    printf("enter the 1st value\n");
    scanf("%d",&x);
    printf("enter the 2nd value\n");
    scanf("%d",&y);
    double result=pow(x,y);
    printf("the result=%.2lf",result);
    return 0;
}
