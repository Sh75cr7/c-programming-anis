#include<stdio.h>
int main()
{
    int num1,num2,num3,sum;
    float avg;
    printf("enter the three number\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    sum=num1+num2+num3;
    avg=(float)sum/3;
    printf("the sum is=%d\n",sum);
    printf("the average value is=%f",avg);


    return  0;
}
