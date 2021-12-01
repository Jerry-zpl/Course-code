//对输入的一行字符进行分类统计
#include<stdio.h>
int main()
{
    int digit=0,English=0,space=0,other=0;
    char ch;
    while ( ( ch=getchar() ) != '\n')
    {
        if(ch>='A' && ch<= 'Z' || ch>='a' && ch<='z')
            English++;
        else if(ch>='0' && ch<='9')
            digit++;
        else if(ch==' ')
            space++;
        else
            other++;
    }
    printf("English character is:%d\n",English);
    printf("Digit character is:%d\n",digit);
    printf("Space character is:%d\n",space);
    printf("Other character is:%d\n",other);
    return 0;
}
