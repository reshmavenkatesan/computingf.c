#include <stdio.h>
int main(){
	int num1,num2,temp=0;
	printf("enter the first number:");
	scanf("%d", &num1);
	printf("enter the second number:");
	scanf("%d", &num2);
	printf("before swapping: n1=%d, n2=%d\n", num1, num2);
	temp=num1;
	num1=num2;
	num2=temp;
	printf("after swapping: n1=%d, n2=%d", num1, num2);
    return 0;
}