/*
一只公鸡：5钱
一只母鸡：3钱
三只小鸡：1钱
用100钱买100只鸡
问：能买公鸡，母鸡，小鸡各多少只？
*/
#include<stdio.h>
#define number 100
typedef struct chicken0{
    unsigned int M[number];
    unsigned int G[number];
    unsigned int X[number];
}ch0;
typedef struct chicken1{
    unsigned int n1[number];
    unsigned int n2[number];
    unsigned int n3[number];
}ch1;
int main(int argc,char const*argv[])
{
    ch0 ji;
    ch0 *p0=&ji;
    ch1 ji0;
    ch1 *p1=&ji0;
    int i;
    for(i=0;i<number;i++){
        (p0->M[i])=i+1;
    }
    printf("Solution:\n");
    int j=0;
    for(i=0;i<number;i++){
        p0->G[i]=(100-4*(p0->M[i]))/7;
        p0->X[i]=(600-3*(p0->M[i]))/7;
        if(p0->G[i]+p0->M[i]+p0->X[i]==100){
            p1->n1[j]=p0->G[i];
            p1->n2[j]=p0->M[i];
            p1->n3[j]=p0->X[i];
            j++;
        }
    }
    for(i=0;i<j;i++){
        printf("公鸡:%u\t母鸡:%u\t小鸡:%u\n",p1->n1[i],p1->n2[i],p1->n2[i]);
    }
    
return 0;
}
