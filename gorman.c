//write a program that take two integer and display average//
#include<stdio.h>
int main()
{
    int num1,num2,sum;
    float avg;
    printf("enter the two numbers\n");
    scanf("%d %d",&num1,&num2);
    sum=num1+num2;
    avg=(float) sum/2;
    printf("the sum is=%d\n",sum);
    printf("the average value is=%f\n",avg);
    return 0;

}
