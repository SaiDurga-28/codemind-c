#include<stdio.h>
int main()
{
    float sal,hra,da;
    scanf("%f%f%f",&sal,&hra,&da);
    float pf=0.12*sal;
    float res=(sal+hra+da+pf);
    printf("%.2f
",pf);
    printf("%.2f
",res);
}