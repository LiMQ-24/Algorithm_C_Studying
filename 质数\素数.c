/*
质数：质数是指在大于1的自然数中，除了1和它本身外没有其他因数的自然数。
质数==素数。
合数：合数是指在大于1的整数中，除了能被1和它本身整除外，还能被其他的数（0除外）整除的数。
1-100之间有多少个素数，并输出所有素数
及素数的个数。
程序分析：判断素数的方法：用一个数分别
去除2到sqrt(这个数)，如果能被整除，则
表明此数不是素数，反之是素数。

*/
#include<stdio.h>
#include<math.h>
#include<windows.h>
int main(void)
{
    int toplimit;
    printf("输入上限:");
    scanf("%d",&toplimit);
    system("pause");
    int i;
    int j;
    int cnt;
    for(i=2;i<=toplimit;i++){
        cnt=0;
        int number=sqrt(i);
        for(j=2;j<=number;j++){
            if(i%j!=0){
                cnt++;
            }
        }
        if(cnt==number-1){
        printf("%d是素数\n",i);
        }
    }
printf("END");
return 0;
}
