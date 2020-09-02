#include<stdio.h>
//나의 풀이 
//int main(){
//	int a,b,r,c;//rabbit과 chicken의 약자
//	scanf("%d %d",&a,&b);
//	r=b/4;
//	for(r;r>0;r--){
//		for(c=0;c<=(b/2);c++)
//		{
//			if(r+c==a)
//			break;
//		}
//		if(4*r+2*c==b)
//		break;
//	}
//	printf("%d %d",r,c);
//	return 0;
//}

//강사의 풀이
int main(){
	int a,b,i, tmp;
	scanf("%d %d",&a, &b);
	for(i=1; i<a; i++){
		tmp=(4*i)+(2*(a-i));
		if(tmp==b){
			printf("%d %d\n", i, a-i);
			break;
		}
	}

} 
 
