/*
合数：合数是指在大于1的整数中，除了能被1和自身整除外还能被其他数（0除外）整除的数。
*/
#include<stdio.h>
#include<windows.h>
int main(void)
{
    int toplimit;
    printf("Enter toplimit:");
    scanf("%d",&toplimit);
    system("pause");
    printf("%d以内的合数为：\n",toplimit);
    int i;
    int j;
    for(i=0;i<=toplimit;i++){
        for(j=2;j<i;j++){
            if(i%j==0&&j!=1&&j!=i){
                printf("%d是合数\n",i);
                break;
            }
        }
    }
    printf("END\n");
}
