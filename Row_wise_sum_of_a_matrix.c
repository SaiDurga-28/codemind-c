#include<stdio.h>
int main()
{
	int i,j,r,c;
	scanf("%d%d",&r,&c);
	int arr[r][c],rowsum=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{  
	    rowsum=0;
		for(j=0;j<c;j++)
		{
			rowsum=rowsum+arr[i][j];
		}
		printf("%d ",rowsum);
	}
}