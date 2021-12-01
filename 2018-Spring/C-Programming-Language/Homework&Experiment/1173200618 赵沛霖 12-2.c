//统计单词个数
#include<stdio.h>
int main()
{
    char a[100],ch;
    int n=0,i,b=0;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        ch=a[i];
        if(ch==' ')
        {
            b=0;
        }
        else if(b==0)
        {
            b=1;
            n++;
        }
    }
    printf("There are is %d in teh line.\n",n);
    return 0;
}
