#include<stdio.h>
#include<math.h>
int main(){
	int aCount=0,dCount=0,count=0;
	char str[50];
	scanf("%s",str);
	while(count<50){
		if(str[count]=='a') 
			aCount++;
		else if(str[count]=='d') 
			dCount++;
		count++;
	}
	printf("a:%d,d:%d",aCount,dCount);
	return 0;
}