#include<stdio.h>
int main()
{
	int n,i;
	printf("enter number of elements in series:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		printf("%d\n",i);
	}
	return 0;
}