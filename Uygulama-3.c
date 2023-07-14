#include <stdio.h>
#include <stdlib.h>
/* 
    Girilen 4 basamaklı sayının özel sayı olup olmadığını bildiren program
    mesela abcd=(ab+cd)^2 ---> 3025=(30+25)^2
*/
int main()
{
    int number,newNumber;
    int part1,part2;
    printf("Enter a positive number: ");
    scanf("%d",&number);
    part1=number/100;
    part2=number%100;
    newNumber=(part1+part2)*(part1+part2);
    if (newNumber==number)
    {
        printf("This number is a special number.");
    }
    else 
        printf("This number is not a special number.");
    return 0;
}
 