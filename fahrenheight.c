//centigrade to Fahrenheit//
//formula=c/5=F-32/9=k-273/5
#include<stdio.h>
int main()
{
    float c,F;
    printf("enter the centigrade");
    scanf("%f",&c);
    F=(c*1.8)+32;
    printf("fahrenheit.%2f\n",F);

    return 0;
}
