#include<stdio.h>
#include<math.h>
int main()
{
    int P,R,T;
    scanf("%d%d%d",&P,&R,&T);
    float ci=P*pow((1+(R/100.0)),T)-P;
    printf("%.2f",ci);
}