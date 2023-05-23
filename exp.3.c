#include<stdio.h>
int main()
{
	int num;
	printf("enter a num ");
	scanf("%d" ,&num);
	if(num%2 == 0)
	printf("num is divisible by 2");
	else
	printf("num is not disible by 2 ");
	return 0;
}