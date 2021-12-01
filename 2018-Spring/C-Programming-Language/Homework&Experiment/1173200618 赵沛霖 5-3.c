//Õº–Œ¥Ú”°2
#include<stdio.h>
int main()
{
    int m,n,i,j,k;
    scanf("%d,%d",&m,&n);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=m-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=n;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
