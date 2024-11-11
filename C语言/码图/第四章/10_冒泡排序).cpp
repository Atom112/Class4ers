#include<stdio.h>
int main(){
	int a[11];
	int coun=1,t=10,m,g=1,z=1,k;
	while(scanf("%d",&a[coun])){
		if(getchar()=='\n'){
			break;
		}
		coun++;
	}
	while(z!=10){
		m=t-1;
		coun=t;
		while(m!=1){
			m=coun-1;
			if(a[coun]<=a[m]){
				k=a[coun];
				a[coun]=a[m];
				a[m]=k;
			}
			coun--;
		}
		z++;
	}
	while(g<=10){
		if(g!=10){
			printf("%d,",a[g]);
		}
		else if(g==10){
			printf("%d",a[g]);
		}
		g++;
	}
	return 0;
}