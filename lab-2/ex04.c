#include<stdio.h>
int main()
{
    char a[100];
    int x;
    float q,r,s; 
    printf("Enter your Name:");
    scanf("%s", a);
    printf("Enter your student ID:");
    scanf("%d", &x);
    printf("Enter your Programming score:");
    scanf("%f", &s);
    printf("Enter your Physics score:");
    scanf("%f", &q);
    printf("Enter your Calculus score:");
    scanf("%f", &r);
    float gpa = (s+q+r)/3.0;
    printf("Hi %s(%d)! Your GPA is %.2f\n", a, x, gpa);
    return 0;

}