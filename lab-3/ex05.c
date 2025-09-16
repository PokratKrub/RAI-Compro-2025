#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter cone height:");
    scanf("%d",&a);
    printf("Enter cone base radius:");
    scanf("%d",&b);
    float v = (3.14/3*b*b*a);
    printf("Cone volume = %.1f\n",v);
    if (v>260) {
        printf("This cone is perfect for Supun project");
    }
    else {
        printf("This cone is not fit for this project");
    }
    return 0;
}