//#include<stdio.h>
//
//int main(){
//	int a,b,k=1;
//	scanf("%d %d",&a, &b);
//	for(int i=1;i<=b;i++)
//	k=k*a;
//	printf("%d",k);
//	return 0;
//}

#include<stdio.h>
//����Ǯ���ε� ���� �ƿ� �Ȱ��� 
int main(){
	int a,b,res=1;
	scanf("%d %d",&a ,&b);
	for(int i=1;i<=b;i++){
		res=res*a;
	}
	printf("%d",res);
	
	return 0;
}
