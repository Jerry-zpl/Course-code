#include<stdio.h>
int main()
{
    int array[]={1,2,3,4,5,6,7,8,9,10};
    int location;
    int target;
    printf("���ݱ�Ϊ1,2,3,4,5,6,7,8,9,10\n");
    printf("������ؼ���: ");
    scanf("%d",&target);
    location=Search_Bin(array,10,target);
    printf("������ҵ�Ԫ���ڵ�%dλ\n",location+1);
    return 0;
}
int Search_Bin(int *sortedSeq,int seqLength,int keyData)
{
    // ����������۰������ؼ��ֵ���key������Ԫ�ء�
    // ���ҵ�������ֵΪ��Ԫ���ڱ��е�λ�ã�����Ϊ0��
    int low=1,mid,high=seqLength;  // �������ֵ
    while(low<=high)
    {
        mid=(low+high)/2;
        if(keyData<sortedSeq[mid])
        {
            high=mid-1;  //��ǰ��������в���
        }
        else if(keyData>sortedSeq[mid])
        {
            low=mid+1;   //�ں��������в���
        }
        else
        {
            return mid;   //�ҵ�����Ԫ��
        }
    }
    return 0;             // ˳����в����ڴ���Ԫ��
}
