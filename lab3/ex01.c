#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter a number:");
    scanf("%f",&a);
    printf("Enter a number:");
    scanf("%f",&b);
    if (a == b) printf("Match$"); 
    else if (a != b) printf("Does not match. Try again$");
    return 0 ;
}