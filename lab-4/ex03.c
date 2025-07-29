#include<stdio.h>
int main()
{
    int count=0;
    do
    {
        printf("Enter the number:");
        scanf("%d",&count);
        if (count==0) 
        {
            printf("Exiting Program... Bye\n");
        }
        else if (count%2 == 0)
        {
            printf("%d is even\n",count);
        }
        else 
        {
            printf("%d is odd\n",count);
        }
    }
    while(count!=0);
}