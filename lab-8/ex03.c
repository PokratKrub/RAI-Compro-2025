#include<stdio.h>
int square(int num) {
    return num*num; 
}
int main() {
    int num1,num2; 
    printf("Enter the two intrgers:");
    scanf("%d %d",&num1,&num2);
    int sum=square(num1)+square(num2);
    printf("Sum of squares of %d and %d is:%d\n",num1,num2,sum);
}