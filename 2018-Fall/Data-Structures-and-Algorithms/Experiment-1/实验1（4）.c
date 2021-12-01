#include <stdio.h>
#include <stdlib.h>
#define MAX 50
int Match(char *str)
{
    int i,top=0;
    char stack[MAX];
    for(i=0;str[i]!='\0';i++)
    {
        switch(str[i])
        {
            //»Ù «◊Û¿®∫≈£¨Ω¯’ª
            case '(': stack[top++]=str[i];break;
            case '[': stack[top++]=str[i];break;
            case '{': stack[top++]=str[i];break;
            //»Ù «”“¿®∫≈£¨∫Õµ±«∞’ª∂•¿®∫≈∆•≈‰
            case ')':if(top==0||stack[top-1]!='(')  return 0;
                     top--;
                     break;
            case ']':if(top==0||stack[top-1]!='[')  return 0;
                     top--;
                     break;
            case '}':if(top==0||stack[top-1]!='{')  return 0;
                     top--;
                     break;
            default : break;
        }
    }
    //≥ˆœ÷∂‡”‡◊Û¿®∫≈
    if(top)
    {
        return 0;
    }
    return 1;
}
int main()
{
    char str[MAX];
    while((scanf("%s",str)!=EOF))
    {
        if(Match(str))
            printf("right\n");
        else
            printf("wrong\n");
    }
    return 0;
}

