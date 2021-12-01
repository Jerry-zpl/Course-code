//数组、指针和函数综合训练1
#include<stdio.h>
#include <string.h>
int Input(long *pnum,char name[][20],int *pscore);
void Sort(long *pnum,char name[][20],int *pscore,int n);
void Print(long *pnum,char name[][20],int *pscore,int n);
int main()
{
    long num[30];                                                                    //定义
	char name[30][20];
	int score[30],n;
    n=Input(num,name,score);
    Sort(num,name,score,n);
    Print(num,name,score,n);
    return 0;
}
int Input(long *pnum,char name[][20],int *pscore)
{
    int i=0,n=0;
	while(i<30)
	{
		scanf("%d%s%d",(pnum+i),(name+i),(pscore+i));
		if(*(pscore+i)<0)
        {
            break;
        }
		n++;
		i++;
	}
	return n;
}
void Sort(long *pnum,char name[][20],int *pscore,int n)
{
    int i,j,a;
    long b;
    char m[20];
    for(i=0;i<n-1;i++)                                                       //判断大小并交换位置
        for(j=0;j<n-i-1;j++)
        {
        	if(*(pscore+j)<*(pscore+j+1))
        	{
        		a=*(pscore+j);
				*(pscore+j)=*(pscore+j+1);
				*(pscore+j+1)=a;
				b=*(pnum+j);
				*(pnum+j)=*(pnum+j+1);
				*(pnum+j+1)=b;
				strcpy(m,name[j]);
				strcpy(name[j],name[j+1]);
				strcpy(name[j+1],m);
			}
		}
}
void Print(long *pnum,char name[][20],int *pscore,int n)
{
    int i=0;
	printf("Pos Num  Name  Grade\n");
	while(i++<n)
	{
		printf("%d %d %s %d\n",i,*(pnum+i-1),name[i-1],*(pscore+i-1));            //输出结果
	}
}

