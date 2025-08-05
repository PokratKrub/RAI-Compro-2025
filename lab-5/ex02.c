#include<stdio.h>
int main()
{
    int i,original[]={1,2,3,4,5,6,7,8,9};
    printf("Reversed Array:");
    for(i=0;i<9;i++)
    {
        printf("% d",original[8-i]);
    }
 
}