#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the 2 Numbers: ");
	scanf("%d, %d" ,&a,&b);
	if(a>b){
		printf("%d is greater than %d",a,b);
	}
	else if(a<b){
		printf("%d is greater than %d",b,a);
	}
	else{
		printf("Both the numbers are equal");
	}
	return 0;
}
