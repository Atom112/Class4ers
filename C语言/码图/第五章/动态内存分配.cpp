#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	int a[100];
	int s;
	scanf("%d",&s);
	int i=0;
	for(i=0;i<s;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+s);
	for(i=0;i<(s-1);i++){
		printf("%d,",a[i]);
	}
	printf("%d",a[i]);
	return 0;
}