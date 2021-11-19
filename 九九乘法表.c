#include<stdio.h>
int main(int argc,char const*argv)
{
    int i,j;
    for(i=1;i<10;i++){
        for(j=1;j<=i;j++){
            printf("%dX%d=%d\t",j,i,j*i);
        }
        printf("\n");
    }
return 0;
}
