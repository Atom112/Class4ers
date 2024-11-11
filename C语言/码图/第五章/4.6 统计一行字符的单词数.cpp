#include<stdio.h>
#include<string.h>
int assess(char c){
	if((c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9'))
		return 1;
	else return 0;
}
int main()
{
	char a[257];
	int i=0;
	int count=0;
	scanf("%[^\n]",a);
	count=0;
	for(i=0;a[i]!='\0';i++){
		if(i==0&&assess(a[i]))
			count=count+1;
		else if(i!=0&&assess(a[i])&&(!assess(a[i-1])))
			count=count+1;
	}
	printf("%d",count);
	return 0;
}