#include<stdio.h>
int main()
{
    char name[40];
    int x,y;
    float z;
    char a[10];
    char uni[10];
    printf("Enter your Name:\n");
    scanf("%s", name);
    printf("Enter your Age:\n");
    scanf("%d", &x);
    printf("Enter your height:\n");
    scanf("%f", &z);
    printf("Enter your weight:\n");
    scanf("%d", &y);
    printf("Enter your gender:\n");
    scanf("%s", a);
    printf("Enter your Education Qualification:\n");
    scanf("%s", uni);
    printf("Name: %s", name);
    printf("       Age: %d", x);
    printf("       Gender: %s\n", a);
    printf("    Height: %f", z);
    printf("Weight: %d\n", y);
    printf("Education: %s", uni);
    return 0;


 






}