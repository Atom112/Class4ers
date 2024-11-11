#include<stdio.h>
int volume(int a,int b,int c)
{
    int p;
    p=a*b*c;
    return (p);
}
int main()
{
    int a,b,c,V;
    scanf_s("%d%d%d",&a,&b,&c);
    V=volume(a,b,c);
    printf("%d",V);
    return 0;
}