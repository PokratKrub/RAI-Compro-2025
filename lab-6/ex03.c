#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    struct value{
        float x,y;
    }val[3];
    for(i=0;i<2;i++) {
        printf("x%d:",i+1);
        scanf("%f",&val[i].x);
        printf("y%d",i+1);
        scanf("%f",&val[i].y);
    }
    float disx = (val[1].x-val[0].x)*(val[1].x-val[0].x);
    float disy = (val[1].y-val[0].y)*(val[1].y-val[0].y);
    float d = sqrt(disx+disy);
    printf("Distance between (%.1f,%.1f) and (%.1f,%.1f) is %.3f unit(s)\n",val[0].x,val[0].y,val[1].x,val[1].y,d);
}