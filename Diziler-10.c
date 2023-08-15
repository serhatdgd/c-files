#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// İki matrisin çarpımı ( Yarım kaldı)

int main(int argc, char *argv[])
{
    int x[50][50], y[50][50], result[50][50];
    int i, j, k, sum = 0;
    int xrows, xcolumns, yrows, ycolumns;
    printf("x matrisinin satir ve sutununu gir: ");
    scanf("%d%d", &xrows, &xcolumns);
    printf("x matrisinin degerlerini girin:\n");
    for (i = 0; i < xrows; i++)
    {
        for (j = 0; j < xcolumns; j++)
        {
            printf("x[%d][%d]:", i, j);
            scanf("%d", &x[i][j]);
        }
    }
    printf("y matrisinin satir ve sutununu gir: ");
    scanf("%d%d", &yrows, &ycolumns);
    printf("y matrisinin degerlerini girin:\n");
    if (yrows != xcolumns)
    {
        printf("Hata");
    }
    else
    {
        for (i = 0; i < yrows; i++)
        {
            for (j = 0; j < ycolumns; j++)
            {
                printf("y[%d][%d]:", i, j);
                scanf("%d", &y[i][j]);
            }
        }
    }
    for ( i = 0; i < xrows; i++)
    {
        for (j = 0; j < ycolumns; j++)
        {
            /* code */
        }
        
    }
    
    return 0;
}