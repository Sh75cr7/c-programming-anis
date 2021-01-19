#include<stdio.h>
int main()
{
   int num1,num2;
   printf("enter two number\n");
   scanf("%d %d",&num1,&num2);
   if(num1>num2)
        printf("number1:%d",num1);
   else if(num1<num2)
   printf("number2 :%d",num2);
   else
    printf("equal");

    return 0;
}
