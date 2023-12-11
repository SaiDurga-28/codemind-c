#include<stdio.h>
int main()
{
    int i,a,b,fds=0,sds=0;
    scanf("%d%d",&a,&b);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            fds=fds+i;
        }
    }
    for(i=1;i<b;i++)
    {
        if(b%i==0)
        {
            sds=sds+i;
        }
    }
    if((a==sds) && (b==fds))
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}