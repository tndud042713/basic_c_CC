#include<stdio.h>

int main(){
	int k,a,count=0;
	scanf("%d",&k);
	for(int i=0;i<7;i++)
	{
		scanf("%d",&a);	
		if(a%10==k)
		count++;
	}
	printf("%d",count);
	
	return 0;
}
