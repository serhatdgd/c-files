#include <stdio.h>
#include <stdlib.h>
int main()
{   
    // BREAK
    /*
    int i;
    for ( i = 0; i < 10; i++)
    {
        if (i==7)
        {
            break;
        }
        printf("%d\n",i);
    }
    */
   /*
   int i=0;
   while (i<=10)
    {
         if (i==5)
        {
            break;
        }
        printf("%d\n",i);
         i++;
   }
   */

  // CONTİNUE
    for (int i = 0; i < 10; i++)
    {
        if (i==5)
        {
            continue;
        }
        printf("%d\n",i);
    }
   return 0;
    
}