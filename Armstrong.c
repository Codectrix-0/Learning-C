#include<stdio.h>
int main()
{
int n,rem,rev=0,temp;
printf("enter the number of terms);
scanf("%d",&n);
temp=n;
while(n>0)
{
rem=n%10;
rev=rev+(rem*rem*rem);
n=n/10;
}
printf("\n number is %d",rev);
if(temp==rev)
{
printf("number is armstrong");
}
else
{
printf("number is not armstrong");
}
return 0;
}
