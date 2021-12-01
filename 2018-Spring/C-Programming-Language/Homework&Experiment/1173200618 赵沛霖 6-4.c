//ËØÊıÅĞ¶Ï
#include<stdio.h>
int main()
{
    int i,m;
    scanf("%d",&m);
    for(i=2;i<m;i++)
    {
        if(m%i==0)
        {
            break;
        }
    }
    if(i>=m)
    {
        printf("The number is:%d",m);
    }
    else
    {
        printf("No!");
    }
    return 0;
}
