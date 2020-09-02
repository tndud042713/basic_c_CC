#include<stdio.h>
//나의풀이 
//int main(){
//	int a[7];
//	int min=1000000;
//	
//	for(int i=0;i<7;i++){
//		scanf("%d",&a[i]);
//	}
//
//	for(int i=0;i<7;i++)
//	{
//		if(a[i]<min){
//			min=a[i];
//		}
//	}
//	printf("%d",min);
//	return 0;
//}

//강사의 풀이 
int main(){
	int a;
	int min=1000000;
	
	for(int i=0;i<7;i++){
		scanf("%d",&a);
		if(a<min) min=a; 
	}
	
	printf("%d",min);
	return 0;
}
//중요한 점은 굳이 배열로 공간을 만들 필요가 없다는 것이다.
//메모리의 구조를 이해하고 문제를 짜야한다 
