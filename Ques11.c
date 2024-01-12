#include<stdio.h>

int main()
{
    int min,hour;

    printf("Enter Time(HH:MM): ");
    scanf("%d:%d",&hour,&min);
    printf("\"%02d Hour and %02d Minute\"",hour,min);
    return 0;
}