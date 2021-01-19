#include<stdio.h>
int main()
{
    float marks;
    printf("enter your marks");
    scanf("%f",&marks);
    if(marks>=80)
        printf("A+\n");
else if(marks>=70)
        printf("A\n");
  else  if(marks>=60)
        printf("A-\n");
    else    if(marks>50)
        printf("B\n");
        else
        printf("fail");
    return 0;
}
