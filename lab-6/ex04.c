#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    float u_x,v_x,u_y,v_y;
    struct value{
        float x,y;
    }val[3];
    {
        printf("u_x:");
        scanf("%f",&val[0].x);
        printf("u_y:");
        scanf("%f",&val[0].y);
        printf("v_x:");
        scanf("%f",&val[1].x);
        printf("v_y:");
        scanf("%f",&val[1].y);
    }
    float a = val[0].x + val[1].x;
    float b = val[0].y + val[1].y;
    printf("Resultant vector is equivalence to %.1fi + %.1fj\n",a,b);
}