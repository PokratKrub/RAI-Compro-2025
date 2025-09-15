#include <stdio.h>
   int main (){
     int i;
     int j;
     int A[3][3];
     for (i = 0; i < 3 ; i++)
     {
         for (j = 0; j < 3 ; j++)
        { 
          scanf("%d",&A[i][j]);
        }
    }
    int (*ptr)[3] = A;
    for (i = 0; i < 3 ; i++)
    {
       for (j = 0; j < 3; j++)
       {
           printf("%d ", ptr[i][j]);
       }
       printf("\n");
    }
    
}
