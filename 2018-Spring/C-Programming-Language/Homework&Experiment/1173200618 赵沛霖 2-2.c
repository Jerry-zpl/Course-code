//计算圆的周长和面积
#include<stdio.h>
#define PI 3.14
int main()
{
  float r,c,a;
  scanf("%f",&r);
  c=2*PI*r;
  a=PI*r*r;
  printf("circum=%.2f",c) ;
  printf(" area=%.2f",a);
  return 0;
}
