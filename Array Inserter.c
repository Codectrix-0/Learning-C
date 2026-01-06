#include<stdio.h>
int main()
{
    int x[10],n,i,v,p;
    printf("how many elements in array");
    scanf("%d",&n);
    printf("\n enter the value of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("\nenter the value you want to insert");
    scanf("%d",&v);
    printf("\n enter the position where you want to insert it");
    scanf("%d",&p);
    for(i=n-1;i>=p;i--)
    {
        x[i+1]=x[i];
    }
    x[p]=v;
    n++;
    printf("\n new array are");
    for(i=0;i<n;i++)
    {
        printf("\n%d",x[i]);
    }
    return 0;
}
