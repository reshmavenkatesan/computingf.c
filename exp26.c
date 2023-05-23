#include <stdio.h>
int main(){
	int n, num, max;
	printf("enter the number of integers:");
	scanf("%d", &max);
	for(int i=1;i<n;i++){
		printf("enter integer %d:", i+1);
		scanf("%d", &num);
		if(num>max){
			max=num;
		}
	}
	printf("the largest number is %d", max);
	return 0;
}