#include<stdio.h>
int main()
{
    int num,ans,i;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Multiplication Table for %d:\n",num);
    for(i=1; i<=12;i++)
    {   ans = num*i;
        printf("%d * %d = %d\n",num,i,ans);
    }
    return 0;
}