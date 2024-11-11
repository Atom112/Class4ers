#include<stdio.h>
int main(){
	int found=0,n,what,where=1,start=1,end,medium;
	int a[99];
	scanf("%d",&n);
	end=n;
	while(where<=n){
		scanf("%d,",&a[where]);
		where++;
	}
	scanf("%d",&what);
	while(found==0){
		if(a[start]==what){
			where=start;
			found=1;
		}
		else if(a[end]==what){
			where=end;
			found=1;
		}
		else{
			medium=(end+start)/2;
			if(a[medium]==what){
				where=medium;
				found=1;
			}
			else if((a[medium]<what&&a[start]>what)||(a[start]<what&&what<a[medium])){
				end=medium;
			}
			else start=medium;
		}
	}
	printf("%d",where);
	return 0;
}