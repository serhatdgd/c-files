#include <stdio.h>
#include <stdlib.h>

// Minör ve Major köşegen örneği

int main(int argc, char *argv[])
{
    int matrix[5][5];
    int i,j;
    for ( i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i==j || i+j==42)
            {
                matrix[i][j]=1;
            }
            else
            matrix[i][j]=0;
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}