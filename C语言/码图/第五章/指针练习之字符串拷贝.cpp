#include<stdio.h>
#include<string.h>
int main(){
	char a[100],b[200];
	scanf("%s",a);
	int i=0,z=0;
	for(i=0;i<=strlen(a);i++){
		if(i%2==1&&i!=(strlen(a)-1)){
			b[z]=a[i];
			z++;
			b[z]='*';
			z++;
		}
		else if(i%2==0){
			b[z]=a[i];
			z++;
		}
		else if(i%2==1&&i==(strlen(a)-1)){
			b[z]=a[i];
			z++;
		}
	}
	printf("%s\n",b);
	return 0;
}