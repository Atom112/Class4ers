/*编写一个程序，找出1~N中的所有素数,其中1<N,N为整数。

输入输出格式要求：
	1.要求每个数后面都要输出逗号，
	  请不要输出其他字符

    2.遇到异常情况，输出error
例如：
输入：5
输出：2,3,5,

输入：a
输出：error

提醒：数据最多不超过200*/
#include<stdio.h>
#include<math.h>
int isPrime(int a){
	int t,m=2,k=2,judgement=1;
	if(a==2||a==3){
		printf("%d,",a);
	}
	else if(a>=4){
		t=sqrt(double(a));
		while(k<=t){
			if(a%k!=0){
				k++;
				continue;
			}
			else{
				judgement=0;
				break;
			}
		}
		if(judgement==1) printf("%d,",a);
	}
	return 0;
}
int main(){
	int N,count=2;
	scanf("%d",&N);
	if(!(N>=2&&N<=200))
		printf("error");
	else{
		while(count<=N){
			isPrime(count);
			count++;
		}
	}
	return 0;
}