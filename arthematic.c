#include<stdio.h>
int main()
{
    char op;
    float a,b;
    printf("enter the operator=");
    scanf("%c",&op);
    printf("enter the value of a,b=");
    scanf("%f%f",&a,&b);
    switch (op)
    {
        case'+':printf("result=%.2f",a+b);
        break;
        case'-':printf("result=%.2f",a-b);
        break;
        case'*':printf("result=%.2f",a*b);
        break;
        case'/':printf("result=%.2f",a/b);
    }
    return 0;
}