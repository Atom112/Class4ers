/*��дһ�������ҳ�1~N�е���������,����1<N,NΪ������

���������ʽҪ��
	1.Ҫ��ÿ�������涼Ҫ������ţ�
	  �벻Ҫ��������ַ�

    2.�����쳣��������error
���磺
���룺5
�����2,3,5,

���룺a
�����error

���ѣ�������಻����200*/
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