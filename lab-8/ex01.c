#include<stdio.h>
#define PI 3.14
float circumference_circle(float r) {
    return 2*PI*r;
}
float area_circle(float r) {
    return PI*r*r;
}
int main() {
    float radius;
    printf("Enter the radius in cm:");
    scanf("%f",&radius);
    printf("Circumference:%.2f\n",circumference_circle(radius));
    printf("Area:%.2f\n",area_circle(radius));
}
