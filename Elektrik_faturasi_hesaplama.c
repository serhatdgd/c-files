#include <stdio.h>
#include <stdlib.h>
/* 
    Bir elektrik dağıtım şirketi verdikleri 
    hizmet karşılığında müşterilerden aylık 
    olarak harcanan toplam kilowatt saat miktarınca
    ve belirli bir abonelik ücreti talep etmektedir.
    Birim kilowatt saat ücreti ve abonelik ücreti her
    ay aylık enflasyon oranında artmaktadır. Buna 
    göre müşterinin bir aya ait ödeyeceği elektrik faturasının
    miktarını hesaplayan program:
    Fatura miktarı = Harcanan Elektrik * Birim Fiyatı + Abone Ücreti 
*/
int main()
{
    float odenecekFatura,eskiBirimFiyat,yeniBirimFiyat;
    float enflasyon,eskiAboneUcreti,yeniAboneUcreti;
    int yeniOkuma,eskiOkuma,toplamHarcananElektrik;             
    printf("Enflasyon oranini girin: ");                        
    scanf("%f",&enflasyon);                                        
    printf("Onceki aya ait birim fiyat miktarini girin: ");
    scanf("%f",&eskiBirimFiyat);
    printf("Onceki aya ait abonelik ucretini girin: ");
    scanf("%f",&eskiAboneUcreti);
    printf("Bir onceki aya ait okuma degerini girin: ");  // Yeni okuma değerinden eski okuma değerini
    scanf("%d",&eskiOkuma);                               // değerini çıkarırsak bir ayda ne kadar 
    printf("Bu aya ait okuma degerini girin: ");          // kullanıldığını buluruz.
    scanf("%d",&yeniOkuma);
    toplamHarcananElektrik= yeniOkuma-eskiOkuma;
    yeniBirimFiyat= eskiBirimFiyat*(1+enflasyon/100);
    yeniAboneUcreti= eskiAboneUcreti*(1+enflasyon/100);
    odenecekFatura= toplamHarcananElektrik*yeniBirimFiyat+yeniAboneUcreti;
    printf("Odenecek faturaniz --> %.2f",odenecekFatura);
    return 0;
}