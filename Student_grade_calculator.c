#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,sum,pres;
    printf("enter the marks=");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    sum=m1+m2+m3+m4+m5;
    pres=sum*100/500;
    if(pres<=85)
    {
        printf("grade=A");
    }
    else if(pres<=75)
    {
        printf("grade=B");
    }
    else if(pres<=65)
    {
        printf("grade=C");
    }
    else if(pres<=55)
    {
        printf("grade=D");
    }
    else
    {
        printf("grade=E");
    }
    return 0;
}


