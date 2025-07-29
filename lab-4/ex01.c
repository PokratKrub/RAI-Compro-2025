#include<stdio.h>
int main()
{
    float sum = 0;
    float count = 0;
    float i;
    float avg;
    for(i=1;i<=10;i++) {
        printf("%f.Enter the number:",i);
        scanf("%f",&count);
        sum = sum + count;
    }
    avg = sum/10;
    printf("total sum is %f\n",sum);
    printf("Average is %2f\n",avg);
    return 0;
}