#include<stdio.h>
#include<math.h>
int i;
int prime(int num) {
    if (num<=1) {
        return 0;
    }
    for (i=2;i<=sqrtf(num);i++) {
        if (num%i==0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int start,end;
    printf("Enter the start and end numbers:");
    scanf("%d %d",&start,&end);
    printf("The prime numbers within the intervals are:\n");
    for(int i=start;i<end;i++) {
        if(prime(i)){
            printf("%d ",i);
        }
    }
    printf("\n");
}