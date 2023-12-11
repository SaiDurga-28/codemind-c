#include<stdio.h>
int main()
{
    int i,n,d,id=0;
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        if(d>id)
        {
            id=d;
        }
        n=n/10;
    }
    printf("%d",id);
}