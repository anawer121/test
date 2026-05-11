#include<stdio.h>

void Swap(int *num1,int *num2) //交换两个数
{
    int number;

    number=*num1;
    *num1=*num2;
    *num2=number;

}
int main()
{
    printf("hello world"); //打印hello world 

    
    return 0;
}   