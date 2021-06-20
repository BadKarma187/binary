#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,a,k;
	k=1;
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("%d%d",k++,--k);
		}
		printf(" ");
	}
}
