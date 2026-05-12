#include<stdio.h>

void Swap(int *num1,int *num2) //交换两个数
{
    int number;

    number=*num1;
    *num1=*num2;
    *num2=number;

}
void RinkArry(int *arry,int ArrySize) //冒泡排序
{
    int i,j;

    for(j=0;j<ArrySize-1;j++)
    {
        for(i=0;i<ArrySize-1-j;i++)
        {
            if(arry[i]>arry[i+1])
            {
                Swap(&(arry[i]),&(arry[i+1]));
            }
        }
    }
}
int main()
{
    printf("hello world"); //打印hello world 

    int arry[]={1,5,3,4,2};
    int ArrySize=sizeof(arry)/sizeof(arry[0]);

    printf("\n");
    RinkArry(arry,ArrySize);

    for(int i=0;i<ArrySize;i++)
    {
        printf("%d ",arry[i]);
    }
    return 0;
}   