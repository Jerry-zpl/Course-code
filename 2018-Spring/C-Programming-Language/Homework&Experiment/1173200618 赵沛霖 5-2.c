//Õº–Œ¥Ú”°1
#include<stdio.h>
int main()
{
    int m,i,j;
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        for(j=0;j<2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
