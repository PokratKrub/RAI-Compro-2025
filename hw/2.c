#include <stdio.h>
 int main() {
	float num1;
	float num2;
    scanf("%f",&num1);
    scanf("%f",&num2);
    float *ptr1,*ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    printf("Before swap : Number1 = %.0f, Number2= %.0f\n",*ptr1,*ptr2);
    printf("After swap : Number1 = %.0f, Number2 = %.0f\n",*ptr2,*ptr1);

}