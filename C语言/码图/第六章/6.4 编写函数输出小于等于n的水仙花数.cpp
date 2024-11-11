int find(int n){
	int count=0,count1=0;
	int t,m=100,result,k;
	if(n<100||n>=1000){
		return 0;
	}
	else{
		for(m=100;m<=n;m++){
			k=m;
			result=0;
			for(count1=0;count1<=2;count1++){
				t=k%10;
				k=k/10;
				result=result+t*t*t;
			} 
			if(result==m){
				count++;
			}
		}
		return count;
	}
}