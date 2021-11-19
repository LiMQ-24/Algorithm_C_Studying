#include<stdio.h>
int main(void)
{
    int value;
    printf("Input:");
    scanf("%d",&value);
    int i;
    int cnt=0;
    for(i=2;i<value;i++){
        if(value%i==0){
            cnt=1;
            break;
        }
    }
    if(cnt==0&&value!=1){
        printf("该数是素数!\n");
    }else{
        printf("该数不是素数!\n");
    }
return 0;
}
