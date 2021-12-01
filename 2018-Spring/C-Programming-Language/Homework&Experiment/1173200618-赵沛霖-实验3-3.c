//餐饮服务质量调查
#include<stdio.h>
int main()
{
    int score[40],count[11]={0},e,f,n;
    scanf("%d",&n);
    for(e=0;e<n;e++)
    {
        scanf("%d",&score[e]);
    }
    for(e=0;e<n;e++)
    {
        switch(score[e])
        {
        case 1:
            count[1]++;
            break;
        case 2:
            count[2]++;
            break;
        case 3:
            count[3]++;
            break;
        case 4:
            count[4]++;
            break;
        case 5:
            count[5]++;
            break;
        case 6:
            count[6]++;
            break;
        case 7:
            count[7]++;
            break;
        case 8:
            count[8]++;
            break;
        case 9:
            count[9]++;
            break;
        case 10:
            count[10]++;
        }
    }
        printf("Grade\tCount\tHistogram\n");   //输出Grade Count  Histogram
        for(e=1;e<=10;e++)                      //输出图形
        {
            printf("%d\t%d\t",e,count[e]);
            for(f=0;f<count[e];f++)
            {
                printf("*");
            }
            printf("\n");
        }
    return 0;
}
