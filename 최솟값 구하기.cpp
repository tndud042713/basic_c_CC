#include<stdio.h>
//����Ǯ�� 
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

//������ Ǯ�� 
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
//�߿��� ���� ���� �迭�� ������ ���� �ʿ䰡 ���ٴ� ���̴�.
//�޸��� ������ �����ϰ� ������ ¥���Ѵ� 
