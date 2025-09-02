#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    struct input{
        float time;
    }a[3];
    for(i=0;i<3;i++) {
        printf("Time input (m:s):");
        scanf("%f",&a[i].time);
    }
    float time_min = a[0].time+a[1].time+a[2].time;
    float time_sec = time_min*60.0;
    printf("Total time elasped: %.2f second(s)\n",time_sec);
}