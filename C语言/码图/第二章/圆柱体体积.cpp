#include<stdio.h>
int main()
{
  float r,h,pi=3.14;
  float area,volume;
  scanf("%f %f",&r,&h);
  area=r*r*pi;
  volume=pi*r*r*h;
  printf("area=%.2f,volume=%.2f",area,volume);
  return 0;
}