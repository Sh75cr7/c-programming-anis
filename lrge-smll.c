#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter the 1st number");
    scanf("%d",&num1);
    printf("enter the 2nd number");
    scanf("%d",&num2);
    if(num1>num2)
        printf("large number:%d\n",num1);
    /*if(num1<num2)
        printf("large number:%d\n",num2);*/
else if(num1<num2)
        printf("large number:%d\n",num2);
    else
        printf("equal:%d");
    return 0;
}
