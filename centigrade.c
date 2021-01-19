// Fahrenheit to centigrade//
//formula=c/5=F-32/9=k-273/5
#include<stdio.h>
int main()
{
    float c,F;
    printf("enter the fahrenheit");
    scanf("%f",&F);
    c=(F-32)/1.8;
    printf("centigrade.%2f\n",c);

    return 0;
}
