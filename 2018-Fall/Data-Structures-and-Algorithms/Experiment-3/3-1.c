#include<stdio.h>
int main()
{
    int array[]={1,2,3,4,5,6,7,8,9,10};
    int location;
    int target;
    printf("数据表为1,2,3,4,5,6,7,8,9,10\n");
    printf("请输入关键字: ");
    scanf("%d",&target);
    location=Search_Bin(array,10,target);
    printf("您想查找的元素在第%d位\n",location+1);
    return 0;
}
int Search_Bin(int *sortedSeq,int seqLength,int keyData)
{
    // 在有序表中折半查找其关键字等于key的数据元素。
    // 若找到，则函数值为该元素在表中的位置，否则为0。
    int low=1,mid,high=seqLength;  // 置区间初值
    while(low<=high)
    {
        mid=(low+high)/2;
        if(keyData<sortedSeq[mid])
        {
            high=mid-1;  //在前半区间进行查找
        }
        else if(keyData>sortedSeq[mid])
        {
            low=mid+1;   //在后半区间进行查找
        }
        else
        {
            return mid;   //找到待查元素
        }
    }
    return 0;             // 顺序表中不存在待查元素
}
