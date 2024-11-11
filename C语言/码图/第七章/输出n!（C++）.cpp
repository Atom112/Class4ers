#include<stdio.h>
int jieCheng(int n){
	int result=1,i;
	if(n==0) 
		return 1;
	else {
		for(i=1;i<=n;i++){
			result=result*i;
		}
		return result;
	}
}
int main(){
	int n,result;
	scanf("%d",&n);
	if(n>12){
		n=12;
		result=jieCheng(n);
		printf("%d!=%d",n,result);
	}
	else{
		result=jieCheng(n);
		printf("%d!=%d",n,result);
	}
	return 0;
}