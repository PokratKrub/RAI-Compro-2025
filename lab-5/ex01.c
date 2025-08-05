#include<stdio.h>
int main()
{
    int i,j,value[11];
    for(i=1;i<11;i++)
    {
        printf("Enter the value %d here: ",i);
        scanf("%d",&value[i]);
    }
    printf("Value in array are:");
        for(j=1;j<11;j++)
        {
           printf("%d,",value[j]);
        }
    
    return 0;
}