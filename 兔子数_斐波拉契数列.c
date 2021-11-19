/*
兔子算法
    一对兔子，从它出生后第三个月开始每个月生产一对小兔子，
产出的小兔子长到第三个月的时候开始每个月生产一只兔子，
问每个月有多少对兔子?
    斐波那契数列的形象化设计
*/
#include<stdio.h>
int main(void)
{
    int number;
    printf("START:\n");
    printf("请您输入所要输出的总月数:");
    scanf("%d",&number);
    int a[number];
    a[0]=a[1]=1;
    int i;
    for(i=0;i<number-2;i++){
        a[i+2]=a[i]+a[i+1];
    }
    for(i=0;i<number;i++){
        printf("M%d:%d\n",i+1,a[i]);
    }
    printf("END");
return 0;
}
