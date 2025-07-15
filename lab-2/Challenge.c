#include<stdio.h>
int main()
{
    float a,b,c;
    float min,max;
    printf("Enter integer #1:");
    scanf("%f",&a);
    printf("Enter integer #2:");
    scanf("%f",&b);
    printf("Enter integer #3:");
    scanf("%f",&c);
    min = a;
    if (b<min) min = b;
    if (c<min) min = c;
    max = a;
    if (b>max) max = b;
    if (c>max) max = c;
    float sum = a+b+c;
    float average = sum/3;
    printf("$\n");
    printf("Results:$\n");
    printf("Minimum: %.0f$\n",min);
    printf("Maximum: %.0f$\n",max);
    printf("Sum: %0.f$\n",sum);
    printf("Average: %.2f$\n",average);
    return 0;
}