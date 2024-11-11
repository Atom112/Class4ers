#include<stdio.h>
#include<math.h>
int main()
{
  double t=0,k=1,r;
  double x,n,m=1,result=0;
  m=1;
  scanf("%lf %lf",&x,&n);
  if(n<0) printf("error");
  else 
  {
    while(t<=n)
    {
      while(k<=t)
      {
        m=m*k;
        k=k+1;
      }
      r=pow(x,t);
      result=r/m+result;
      t++;
    }
    printf("%.6lf",result);
  }
  return 0;
}