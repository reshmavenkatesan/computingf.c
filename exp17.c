#include<stdio.h>
int main()
{
	int n,i,sum=0;
	float d;
	printf("enter number of elements in a set:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
    sum = sum+i;
    d=sum/n;
	printf("%f",d);
	return 0;
}