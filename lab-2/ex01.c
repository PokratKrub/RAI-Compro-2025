#include<stdio.h>
int main()
{
    int x;
    float y;
    char a[10];
    printf("Please enter an interger value :\n");
    scanf("%d",&x);
    printf("You entered %d\n", x);
    printf("Please enter a float value :\n");
    scanf("%f",&y);
    printf("You entered %f.2f\n", y);
    printf("Please enter a character :\n");
    scanf("%s",a);
    printf("You entered %s\n", a);
    return 0;


}