#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    double average=0,numbers[3];

    printf("Enter Three Numbers: ");
    scanf("%lf%lf%lf",&numbers[0],&numbers[1],& numbers[2]);
    average=(numbers[0]+numbers[1]+numbers[2])/3;
    printf("Average: %.3f",average);
    return 0;
}