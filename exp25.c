#include <stdio.h>
int main(){
	int n1,n2;
	printf("enter the first number:");
	scanf("%d", &n1);
	printf("enter the second number:");
	scanf("%d", &n2);
	if(n1>n2){
		printf("%d is the biggest number", n1);
	}else if(n2>n1) {
		printf("%d is the biggest number", n2);
	}else{
		printf("both numbers are equal");
	}
	return 0;
}