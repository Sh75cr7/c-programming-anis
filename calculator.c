#include<stdio.h>
int main()
{
    double num1,num2;
    char op;
    printf("Enter the two numbers\n");
    scanf("%lf %lf",&num1,&num2);
    printf("Enter an operator(+,-,*,/)");
    scanf("%c",&op);
    switch(op)
    {
    case'+':
        {
            printf("%lf+%lf=%lf\n",num1,num2,num1+num2);
              break;
        }
            case'-':
        {
            printf("%lf-%lf=%lf\n",num1,num2,num1-num2);
              break;
        }
            case'*':
        {
            printf("%lf*%lf=%lf\n",num1,num2,num1*num2);
              break;
        }
            case'/':
        {
            printf("%lf/%lf=%lf\n",num1,num2,num1/num2);
            break;
        }
            default:
                printf("not a result");

    }




}
