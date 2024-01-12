#include<stdio.h>
int main()
{
    float A,R;
    float pi = 3.142;

    printf("Enter Radius of the Circle: ");
    scanf("%f",&R);

    A = pi*R*R;

    printf("Area of circle is %f having the radius %f",A,R);
    return 0;
}