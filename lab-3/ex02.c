#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if (a<1&&a>100){
        printf("%d is out of range", a);
    }
    else if (a%2 == 0) {
        printf("%d is even", a);
    }
    else if (a%2 != 0) {
        printf("%d is odd", a);
    }
    return 0;
}