#include <stdio.h>
#include <stdlib.h>
// Çok boyutlu diziler
int main(int argc, char *argv[])
{
    int matrix[2][3]={
                        {2,7,19},
                        {3,8,12}
    };
    // printf("%d",matrix[0][1]); 
    int i,j;
    for ( i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    
}