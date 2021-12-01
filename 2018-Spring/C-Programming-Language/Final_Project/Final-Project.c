#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_LEN 10
#define STU_NUM 30
#define COURSE_NUM 6
typedef struct student
{
    long num;
    char name[MAX_LEN];
    float score[COURSE_NUM];
    float sum;
    float aver;
}STU;
int Menu(void);
void ReadScore(STU stu[],int n,int m);
void AverSumofEveryStudent(STU stu[],int n,int m);
void AverSumofEveryCourse(STU stu[],int n,int m);
void SortbyScore(STU stu[],int n,int m,int(*compare)(float a,float b));
int Ascending(float a,float b);
int Descending(float a,float b);
void SwapFloat(float *x,float *y);
void SwapLong(long *x,long *y);
void SwapChar(char x[],char y[]);
void AsSortbyNum(STU stu[],int n,int m);
void SortbyName(STU stu[],int n,int m);
void SearchbyNum(STU stu[],int n,int m);
void SearchbyName(STU stu[],int n,int m);
void StatisticAnalysis(STU stu[],int n,int m);
void PrintScore(STU stu[],int n,int m);
void WritetoFile(STU stu[],int n,int m);
void ReadfromFile(STU stu[],int *n,int *m);
int main()
{
    char ch;
    int n=0,m=0;
    STU stu[STU_NUM];
    printf("Input student number(n<%d):",STU_NUM);
    scanf("%d",&n);
    printf("Input course number(m<=%d):",COURSE_NUM);
    scanf("%d",&m);
    while(1)
    {
        ch=Menu();
        switch(ch)
        {
            case 1:ReadScore(stu,n,m);
                   break;
            case 2:AverSumofEveryCourse(stu,n,m);
                   break;
            case 3:AverSumofEveryStudent(stu,n,m);
                   break;
            case 4:SortbyScore(stu,n,m,Descending);
                   printf("\nSort in descending order by score:\n");
                   PrintScore(stu,n,m);
                   break;
            case 5:SortbyScore(stu,n,m,Ascending);
                   printf("\nSort in ascending order by score:\n");
                   PrintScore(stu,n,m);
                   break;
            case 6:AsSortbyNum(stu,n,m);
                   printf("\nSort in ascending order by number:\n");
                   PrintScore(stu,n,m);
                   break;
            case 7:SortbyName(stu,n,m);
                   printf("\nSort in dictionary order by name:\n");
                   PrintScore(stu,n,m);
                   break;
            case 8:SearchbyNum(stu,n,m);
                   break;
            case 9:SearchbyName(stu,n,m);
                   break;
            case 10:StaticAnalysis(stu,n,m);
                    break;
            case 11:PrintScore(stu,n,m);
                    break;
            case 12:Writetofile(stu,n,m);
                    break;
            case 13:ReadfromFile(stu,&n,&m);
                    break;
            case 0:printf("End of program!\n");
                   exit(0);
            default:printf("Input error!\n");
        }
    }
    return 0;
}
int Menu(void)
{
    int itemSelected;
    printf("Management for Students' scores\n");
    printf("1.Input record\n");
    printf("2.Caculate total and average score of every course\n");
    printf("3.Caculate total and average score of every student\n");
    printf("4.Sort in descending order by score\n");
    printf("5.Sort in ascending order by score\n");
    printf("6.Sort in ascending order by number\n");
    printf("7.Sort in dictionary order by name\n");
    printf("8.Search by number\n");
    printf("9.Search by name\n");
    printf("10.Statistic analysis\n");
    printf("11.List record\n");
    printf("12.Write to a file\n");
    printf("13.Read from a file\n");
    printf("0.Exit\n");
    printf("Please Input your choice:");
    scanf("%d",&itemSelected);
}
void ReadScore(STU stu[],int n,int m)
{
    int i,j;
    printf("Input student's ID, name and score: \n");
    for(i=0;i<n;i++)
    {
        scanf("%ld%s",&stu[i],stu[i].name);
        for(j=0;j<m;j++)
        {
            scanf("%f",&stu[i].score[j]);
        }
    }
}
void AverSumofEveryStudent(STU stu[],int n,int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        stu[i].sum=0;
        for(j=0;j<m;j++)
        {
            stu[i].sum=stu[i].sum+stu[i].score[j];
        }
        stu[i].aver=m>0?stu[i].sum/m:-1;
        printf("student %d:sum=%.0f, aver=%.0f\n",i+1,stu[i].sum,stu[i].aver);
    }
}
void AverSumofEveryCourse(STU stu[],int n,int m)
{
    int i,j;
    float sum[COURSE_NUM],aver[COURSE_NUM];
    for(j=0;j<m;j++)
    {
        sum[j]=0;
        for(i=0;i<n;i++)
        {
            sum[j]=sum[j]+stu[i].score[j];
        }
        aver[j]=n>0?sum[j]/n:-1;
        printf("course %d:sum=%.0f,aver=%.0f\n",j+1,sum[j],aver[j]);
    }
}
void SortbyScore(STU stu[],int n,int m,int(*compare)(float a,float b))
{
    int i,j,k,t;
    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
        {
            if((*compare)(stu[j].sum,stu[k].sum))
            {
                k=j;
            }
        }
        if(k!=i)
        {
            for(t=0;t<m;t++)
            {
                SwapFloat(&stu[k].score[t],&stu[i].score[t]);
            }
            SwapFloat(&stu[k].sum,&stu[i].sum);
            SwapFloat(&stu[k].aver,&stu[i].aver);
            SwapLong(&stu[k].num,&stu[i].num);
            SwapChar(stu[k].name,stu[i].name);
        }
    }
}
int Ascending(float a,float b)
{
    return a<b;
}
int Descending(float a,float b)
{
    return a>b;
}
void SwapFloat(float *x,float *y)
{
    float temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void SwapLong(long *x,long *y)
{
    long temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void SwapChar(char x[],char y[])
{
    char temp[MAX_LEN];
    strcpy(temp,x);
    strcpy(x,y);
    strcpy(y,temp);
}
void AsSortbyNum(STU stu[],int n,int m)
{
    int i,j,k,t;
    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
        {
            if(stu[j].num<stu[k].num)
            {
                k=j;
            }
        }
        if(k!=i)
        {
            for(t=0;t<m;t++)
            {
                SwapFloat(&stu[k].score[t],&stu[i].score[t]);
            }
            SwapFloat(&stu[k].sum,&stu[i].sum);
            SwapFloat(&stu[k].aver,&stu[i].aver);
            SwapLong(&stu[k].num,&stu[i].num);
            SwapChar(stu[k].name,stu[i].name);
        }
    }
}
void SortbyName(STU stu[],int n,int m)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(stu[j].name,stu[i].name)<0)
            {
                for(t=0;t<m;t++)
            {
                SwapFloat(&stu[i].score[t],&stu[j].score[t]);
            }
            SwapFloat(&stu[i].sum,&stu[j].sum);
            SwapFloat(&stu[i].aver,&stu[j].aver);
            SwapLong(&stu[i].num,&stu[j].num);
            SwapChar(stu[i].name,stu[j].name);
            }
        }
    }
}
void SearchbyNum(STU stu[],int n,int m)
{
    long number;
    int i,j;
    printf("Input the number you want to search:");
    scanf("%ld",&number);
    for(i=0;i<n;i++)
    {
        if(stu[i].num==number)
        {
            printf("%ld\t%s\t",stu[i].num,stu[i].aver);
            for(j=0;j<m;j++)
            {
                printf("%.0f\t",stu[i].score[j]);
            }
            printf("%.0f\t%.0f\n",stu[i].sum,stu[i].aver);
            return;
        }
    }
    printf("\nNot found! \n");
}
void SearchbyName(STU stu[],int n,int m)
{
    char x[MAX_LEN];
    int i,j;
    printf("Input the name you want to search:");
    scanf("%s",x);
    for(i=0;i<n;i++)
    {
        if(strcmp(stu[i].name,x)==0)
        {
            printf("%ld\t%s\t",stu[i].num,stu[i].name);
            for(j=0;j<m;j++)
            {
                printf("%.0f\t",stu[i].score[j]);
            }
            printf("%.0f\t%.0f\n",stu[i].sum,stu[i].aver);
            return;
        }
    }
    printf("\nNot found! \n");
}
void StatisticAnalysis(STU stu[],int n,int m)
{
    int i,j,total,t[6];
    for(j=0;j<m;j++)
    {
        printf("For course %d:\n",j+1);
        memset(t,0,sizeof(t));
        for(i=0;i<n;i++)
        {
            if(stu[i].score[j]>=0&&stu[i].score[j]<60)
            {
                t[0]++;
            }
            else if(stu[i].score[j]<70)
            {
                t[1]++;
            }
            else if(stu[i].score[j]<80)
            {
                t[2]++;
            }
            else if(stu[i].score[j]<90)
            {
                t[3]++;
            }
            else if(stu[i].score[j]<100)
            {
                t[4]++;
            }
            else if(stu[i].score[j]==100)
            {
                t[5]++;
            }
        }
        for(total=0,i=0;i<=5;i++)
        {
            total=total+t[i];
        }
        for(i=0;i<=5;i++)
        {
            if(i==0)
            {
                printf("<60\t%d\t%.2f%%\n",t[i],(float)t[i]/n*100);
            }
            else if(i==5)
            {
                printf("%d\t%d\t%.2f%%\n",(i+5)*10,t[i],(float)t[i]/n*100);
            }
            else
            {
                printf("%d-%d\t%d\t%.2f%%\n",(i+5)*10,(i+5)*10+9,t[i],(float)t[i]/n*100);
            }
        }
    }
}
void PrintScore(STU stu[],int n,int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        printf("%ld\t%s\t",stu[i].num,stu[i].name);
        for(j=0;j<m;j++)
        {
            printf("%.0f\t",stu[i].score[j]);
        }
        printf("%.0f\t%.0f\n",stu[i].sum,stu[i].aver);
    }
}
void WritetoFile(STU stu[],int n,int m)
{
    FILE *fp;
    int i,j;
    fprintf(fp,"%d\t%d\n",n,m);
    if((fp=fopen("student.txt","w"))==NULL)
    {
        printf("Failure to open score.txt!\n");
        exit(0);
    }
    for(i=0;i<n;i++)
    {
        fprintf(fp,"%10ld%10s",stu[i].num,stu[i].name);
        for(j=0;j<m;j++)
        {
            fprintf(fp,"%10.0f",stu[i].score[j]);
        }
        fprintf(fp,"%10.0f%10.0f\n",stu[i].sum,stu[i].aver);
    }
    fclose(fp);
}
void ReadfromFile(STU stu[],int *n,int *m)
{
    FILE *fp;
    int i,j;
    if((fp=fopen("student.txt","r"))==NULL)
    {
        printf("Failure to open score.txt!\n");
        exit(0);
    }
    fscanf(fp,"%d\t%d",n,m);
    for(i=0;i<*n;i++)
    {
        fscanf(fp,"%10ld",&stu[i].num);
        fscanf(fp,"%10s",stu[i].name);
        for(i=0;i<*n;i++)
        {
            fscanf(fp,"%10ld",&stu[i].num);
            fscanf(fp,"%10s",stu[i].name);
            for(j=0;j<*m;j++)
            {
                fscanf(fp,"%10f",&stu[i].score[j]);
            }
            fscanf(fp,"%10f%10f",&stu[i].sum,&stu[i].aver);
        }
        fclose(fp);
    }
}
