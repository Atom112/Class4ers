#include<math.h>
#include<stdio.h>
int main()
{
   int m=2,z=1;
   double q,n;
   scanf("%lf",&n);
   q=sqrt(n);
   if(n<=3) printf("error");
   else 
   {
       while((m<=q)&&(z!=0))
       {
         z=(int)n%m;
         m++;
       }
       if(z!=0) printf("yes");
       else printf("no");
   }
   return 0;
}