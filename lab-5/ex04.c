#include<stdio.h>
int main()
{
    int i,num[11],even,odd;
    for(i=1;i<11;i++)
    {
    printf("Enter value %d:",i);
    scanf("%d",&num[i]);
    if (num[i]%2==0)
    {
        even++;
    }
    else
    {
        odd++;

    }
    }
    printf("Even numbers:%d\n",even);
    printf("Odd numbers:%d\n",odd);
}