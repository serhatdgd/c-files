#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Hazır Matematik Fonksiyonları
int main()
{
    int i;
    for (i = 0; i <= 5; i++)
    {
        printf("e uzeri %d:%f\n", i, exp(i)); // e nin kuvvetleri --> exp()
                                              // 2 nin kuvvetleri --> exp2()
    }
    for (i = 0; i <= 5; i++)
    {
        printf("Karekok %d:%.f\n", i, sqrt(i)); // sayıların karekökü --> sqrt()
    }
    for (i = 0; i <= 5; i++)
    {
        printf("Us alma %d:%.f\n", i, pow(i, i)); // üs alma --> pow(taban,üs)
                                                  // log(){e tabanında}
    }
    /*
    sqrt()       ----------------->  Karekök
    cbrt()       ----------------->  Küpkök
    abs()        ----------------->  Mutlak
    fabs()       ----------------->  Mutlak(Ondalıklı sayılar)
    ceil()       ----------------->  Yukarı yuvarlama
    floor()      ----------------->  Aşağıya yuvarlama
    fdim()       ----------------->  2 float değerinin farkı pozitifse bize döndürür negatifse döndürmez
    fma(1,2,3)   ----------------->  1 ile 2 yi çarpıp 3 ile toplar.
    fmax(1,2)    ----------------->  Büyük olan sayıyı yazdırır.
    fmin(1,2)    ----------------->  Küçük olan sayıyı yazdırır.
    fmod(1,2)    ----------------->  Mod işlemi
    hypot(1,2)   ----------------->  Kenarları yazarız hipotenüsü verir.
    isinfinite() ----------------->  Sonsuzsa 0 değilse 1 döndürür.
    isgreat(1,2) ----------------->  1, 2 den büyükse 1 değilse 0 döndürür.
    isgreatequal(1,2)   ---------->  1, 2 den büyük veya eşitse 1 değilse 0 döndürür.
    isless(1,2)  ----------------->  1, 2 den küçükse 1 değilse 0 döndürür.
    islessequal(1,2)    ---------->  1, 2 den küçük veya eşitse 1 değilse 0 döndürür.
    isnan()      ----------------->  Parametre bir sayı değilse 1 sayıysa 0 döndürür.
    remainder(1,2)  -------------->  1 in 2 ye bölümünden kalanı verir.(mod)
    round()      ----------------->  Yuvarlama
    signbit()    ----------------->  Sayı negatif ise 1 değilse 0 döndürür.
    NOT: Formüllerin hepsi double çevirir.(abs hariç)

    */
}