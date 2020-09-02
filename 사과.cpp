#include<stdio.h>

int main(){
	int s,sum=0;
	scanf("%d",&s);
	int a;
	int b;
	for(int i=0;i<s;i++){
		scanf("%d",&a);
		scanf("%d",&b);
		sum+=(b%a);
	}
	printf("%d",sum);
	return 0;
} 
