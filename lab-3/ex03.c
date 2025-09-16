#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number:");
    scanf("%d", &a);
    b = a%2;
    switch (b) {
    case 1:
        switch(a) {
        case 1 ... 100:
        printf("%d is odd",a);
        break;
        default:
            printf("%d is out of range",a);
            break;
        }
        break;
    case 0:
        switch(a) {
        case 1 ... 100:
            printf("%d is even",a);
            break;
        default:
            printf("%d is out of range",a);
        }
        break;


    }

    
    }
