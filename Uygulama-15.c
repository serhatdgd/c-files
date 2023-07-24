#include <stdio.h>
#include <stdlib.h>

// OBEB ve OKEK bulma

int main()
{
    int i,x,y,OBEB=0,OKEK=1,smallNumber;
    printf("OBEB'i ve OKEK'i bulunacak iki sayi girin: ");
    scanf("%d%d",&x,&y);
    if (x<y)
        smallNumber=x;
    else
        smallNumber=y;
    for (i = 2; i <= smallNumber; i++)
    {
        if ((x%i==0) && (y%i==0))
        {
            OBEB=i;
        }
    }
    if (OBEB != 0)
    {
        OKEK=OBEB*x/OBEB*y/OBEB;
        printf("Bu sayilarin OBEB'i: %d\n",OBEB);
        printf("Bu sayilarin OKEK'i: %d\n",OKEK);
    }
    else
    {   
        OKEK=x*y;
        printf("Bu sayilarin OBEB'i yoktur.\n");
        printf("Bu sayilarin OKEK'i: %d\n",OKEK);
    }
    return 0;
}