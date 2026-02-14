#include<stdio.h>
int main(){
    int units;
    float bill;
    printf("enter units consumed");
    scanf("%d",&units);
    if(units<=1000){
    bill=units*5;}
    else if(units<=2000){
        bill=units*6;}
    else{
        bill=units*7;}
        printf("total electricity bill: $%.2f",bill);
    return 0;
}
