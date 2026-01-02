#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("enter frist number");
    scanf("%d,&a");
    printf("enter second number");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("\nvalue of a is %d",a);
    printf("\nvalue of b is %d",b);
    return 0;
}
