#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int c=a+b,s=a-b,p=a*b,d=a/b,m=a%b;
    printf("Sum:%d
",c);
    printf("Difference:%d
",s);
    printf("Product:%d
",p);
    printf("Quotient:%d
",d);
    printf("Remainder:%d
",m);
}