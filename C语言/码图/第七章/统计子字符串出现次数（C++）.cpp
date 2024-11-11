#include<string.h>
#include<iostream>
using namespace std;
int SubStrNum(char* str,char* substr){
	int len1,len2,count=0,i,j=0,z,assess=1;
	len1=strlen(str);
	len2=strlen(substr);
	for(i=0;i<len1;i++){
		z=i;
		if(str[z]==substr[0]){
			for(j=0;j<len2;j++){
				if(str[z]!=substr[j]){
					assess=0;
					break;
				}
				z++;
			}
			if(assess==1){
				count++;
				i=z-1;
			}
		}
		assess=1;
	}
	cout<<"match times=" << count;
	return count;
}