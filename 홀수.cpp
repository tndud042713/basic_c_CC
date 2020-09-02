#include<stdio.h>
//전 강의 듣고 고쳤는데 강사와 논리가 같다
 
int main(){
	int a;
	int min=1000000;
	int sum=0;
	
	for(int i=0;i<7;i++){
		scanf("%d",&a);
		if(a%2==1){
			sum+=a;
			if(a<min){
				min=a;
				}
			}
		}
	printf("%d\n%d",sum,min);
}

