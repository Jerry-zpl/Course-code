#include<stdio.h>
#include<malloc.h>
#define MAXSIZE 100
typedef int ElemType;

//Õ»µÄË³Ðò´¢´æ
typedef struct
{   ElemType *base;
    ElemType *top;
    int stacksize;
}SqStack;

//³õÊ¼»¯Õ»
int InitStack(SqStack *S)
{
    S->base=(ElemType*)malloc(MAXSIZE*sizeof(ElemType));
    if(!S->base)
    {
        return 0;
    }
    S->top=S->base;
    S->stacksize=MAXSIZE;
    return 1;
}

//½øÕ»
int Push(SqStack *S,ElemType e)
{
    //ÅÐ¶ÏÊÇ·ñÕ»Âú
    if(S->top-S->base==MAXSIZE)
    {
        return 0;
    }
    else
    {
        *(S->top)=e;
        S->top++;
    }
}

//³öÕ»
int Pop(SqStack *S,ElemType *e)
{
    //ÅÐ¶ÏÊÇ·ñÕ»¿Õ
    if(S->top==S->base)
        return 0;
    else
    {   S->top--;
        *e=*(S->top);
    }
}

int CreateStack(SqStack *S)
{
    int e;
    if(S)
        printf("Init Success!\n");
    else
    {
        printf("Init Fail!\n");
        return 0;
    }
    printf("input data:(Terminated by inputing a character)\n");
    while(scanf("%d",&e)&&e!=0)
    {
        Push(S,e);
    }
    return 1;
}

//Êä³öÕ»
void PrintStack(SqStack *S)
{
    ElemType e;
    while(Pop(S,&e))
    {
        printf("%3d",e);
    }
}

int main()
{
    SqStack stack;
    printf("1-createStack\n");
    InitStack(&stack);
    CreateStack(&stack);
    printf("2-Pop&Print\n");
    PrintStack(&stack);
    return 0;
}

