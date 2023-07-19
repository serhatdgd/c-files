#include <stdio.h>
#include <stdlib.h>

// Girilen Notları Toplayıp Ortalamasını Alan Program

int main()
{
    int i;
    float examGrade,sumGrade,average;
    i=1;
    examGrade=0.0;
    sumGrade=0.0;
    do
    {   
        printf("%dth exam grade: ",i);
        scanf("%f",&examGrade);
        if (examGrade == 0)
        {
            break;
        }
        if (examGrade < 0)
        {
            printf("Please don't do this \n");
            continue;
        }
        else
        {
            sumGrade +=examGrade;
        }
        i++;
    } while (examGrade != 0);
    
    if ((i-1) == 0)
    {
        average=0.0;
    }
    else
    {average=sumGrade/(i-1);}
    
    printf("\nYou entered %d exam grades\n",i-1);
    printf("Average:%f\n",average);
    
    return 0;
}
