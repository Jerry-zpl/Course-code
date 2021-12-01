//±‡≥Ãº∆À„1£°+3£°+...+£®2n-1£©£°
#include<stdio.h>
long fac(int n);
int main()
{
    int m,n,i;
    long sum=0;
    scanf("%d", &n);
    for(i=1;i<=(2*n-1);i=i+2)
    {
        m=fac(i);
        sum=sum+m;
    }
    printf("sum=%ld",sum);
    return 0;
}
long fac(int t)
{
    int j;
    long p=1;
    for(j=1;j<=t;j++)
    {
        p=p*j;
    }
    return p;
}
