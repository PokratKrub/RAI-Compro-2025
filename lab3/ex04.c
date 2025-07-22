#include<stdio.h>
int main()
{
    char a[100];
    int b,c,d;
    printf("Enter your name:");
    scanf("%s",a);
    printf("Enter your Calculas score:");
    scanf("%d",&b);
    printf("Enter your Physics score:");
    scanf("%d",&c);
    printf("Enter your Science score:");
    scanf("%d",&d);
    float average = (b+c+d)/3;
    if (average<50) {
        printf("%s, your average is %.2f. You got grade F.",a,average);
    }
    else if (average<=50&&average<60) {
        printf("%s, your average is %.2f. You got grade D.",a,average);
    }
    else if (average<=60&&average<70) {
        printf("%s, your average is %.2f. You got grade C.",a,average);
    }
    else if (average<=70&&average<80) {
        printf("%s, your average is %.2f. You got grade B.",a,average);
    }
    else if (average>=80) {
        printf("%s, your average is %.2f. You got grade A.",a,average);
    }
 
    return 0;
}



