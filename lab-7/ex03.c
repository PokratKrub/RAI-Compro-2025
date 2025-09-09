#include<stdio.h>
int main() {
    int array[] = {3,1,2,4,5,6};
    int *ptr = array;
    int max = *ptr;
    for(int i=1;i<6;i++){
        ptr++;
        if (*ptr>max) {
            max = *ptr;
        }
    }
    printf("Max value:%d\n",max);
    

}