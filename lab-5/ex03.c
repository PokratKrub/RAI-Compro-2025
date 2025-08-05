#include<stdio.h>
int main()
{
    int i,n[100],max,j;
    for(i=1;i<6;i++)
    {
        printf("Enter the marks of student %d:",i);
        scanf("%d",&n[i]);
    }
    int total=n[1]+n[2]+n[3]+n[4]+n[5];
    printf("Total Marks:%d\n",total);
    max = n[0];
    for(j=1;j<6;j++)
    {
        if (n[j]>max)
        {
            max = n[j];
        }
    }printf("Highest Marks:%d\n",max);
    
}