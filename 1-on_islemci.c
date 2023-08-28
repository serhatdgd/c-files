#include <stdio.h>  //------------> Önişlemci komutları
#include <stdlib.h> //------------> Önişlemci komutları
#include <math.h>   //------------> Önişlemci komutları

#define MYNUMBER 7  // değer atama (sabitleri büyük harfle yazarız.)
#define ROW 100
#define COLUMN 100
#define PI 3.14

#define yazdir printf
#define oku scanf 

int main()
{
    int matrix[ROW][COLUMN];
    printf("%d\n",MYNUMBER);
    
    int radius;
    float area;
    yazdir("Enter the radius: ");
    oku("%d",&radius);
    area=PI*radius*radius;
    yazdir("\nArea: %f",area);
    return 0;
}