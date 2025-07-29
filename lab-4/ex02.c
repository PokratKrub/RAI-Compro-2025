#include<stdio.h>
int main()
{
    int sum=0,count,i=1;
    while(i<=10) 
    {
        printf("%d.Enter the number:",i);
        scanf("%d",&count);
        sum = sum+count;
        i++;
    }
    printf("Total sum is %d\n",sum);
}