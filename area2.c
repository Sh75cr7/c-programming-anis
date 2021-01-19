//write a program that calculate the area of a triangle
#include<stdio.h>
int main()
{
    float base,height,area;
    printf("the base:\n");
    scanf("%f",&base);
    printf("the height:\n");
    scanf("%f",&height);
    area=(float )1/2*base*height;
    printf("the area is:%.2f\n",area);
    return 0;
}
