#include <stdio.h>
#include <math.h>
int fact(int x){
	int i, fact=1;
	for(int i=1;i<=x;i++){
		fact=fact*i;
	}
	return fact;
}
double convert (double degree){
	double pi=3.14;
	return (degree*(pi/180));
}
int main() {
	int x,y,i,j,n;
	float sum=0.0;
	printf("enter x: ");
	scanf("%d", &x);
	printf("enter n: ");
	scanf("%d", &n);
	y=x;
	double r=convert(x);
	for(i=1,j=1;i<=n;i++,j=j+2)
	{
		if(i%2==0)
		{
			sum=sum-pow(r,j)/fact(j);
		}
		else
		{
			sum=sum+pow(r,j)/fact(j);
		}
	}
	printf("sin(%d)=%f", y, sum);
	return 0;
}