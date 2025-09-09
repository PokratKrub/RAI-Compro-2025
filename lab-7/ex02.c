#include<stdio.h>
int main()
{
    int a=0;
    int b=5;
    printf("Before reverse: a = %d, b = %d\n",a,b);
    int *pA = &a;
    int *pB = &b;
    int c=*pA;
    *pA=*pB;
    *pB=c;
    printf("After reverse: a = %d,b = %d\n",a,b);



}