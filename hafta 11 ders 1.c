/*Example 1
1-Bilet Tipi
Öğrenci: 50 TL
Tam: 80 TL

2-Halk Günü (indirim)
pazartesi, çarşamba ve cuma günleri %20 indirim olsun

3-Bilet adedi artınca zam
kişi 5 bilet veya daha fazla alırsa her bilet için +10 TL

Fonksiyonlar için:
1-Bilet fiyatını hesaplayan fonks.
float calculateticketprice(int type);

2-Gün indirimini uygulayan fonks.
float applydaydiscount(float price, int day);

3-Adet zamını uygulayan fonks.
float applyamountincrease(float price, int count);
*/
/*
#include <stdio.h>

float CalculateTicketPrice(int type){
    if(type == 1){
        return 50.0f;
    }
    else if(type == 2){
        return 80.0f;
    }
    else{
        return 0.0f;
    }
}
float ApplyDayDiscount(float price, int day){
    if(day == 1 || day == 3 || day == 5){
        return price * 0.80f;
    }
    return price;
}
float ApplyAmountIncrease(float price, int count){
    if(count >= 5){
        return price + 10.0f;
    }
    return price;
}

int main(){
    int bilettipi, gun, adet;
    float tekbiletfiyati, nihaifiyat;

    printf("Bilet tipini girin (1: öğrenci, 2: tam)");
    scanf("%d", &bilettipi);

    printf("Bugün haftanın kaçıncı günü olduğunu girin: ");
    scanf("%d", &gun);

    printf("Kaç adet bilet alacağınızı girin: ");
    scanf("%d", &adet);

     if(bilettipi != 1 && bilettipi != 2){
        printf("Geçersiz bilet tipi.\n");
        return 1;
    }

    tekbiletfiyati = CalculateTicketPrice(bilettipi);
    tekbiletfiyati = ApplyDayDiscount(tekbiletfiyati, gun);
    tekbiletfiyati = ApplyAmountIncrease(tekbiletfiyati, adet);

    nihaifiyat = tekbiletfiyati * adet;

    printf("Nihai toplam ücret: %.2f TL\n", nihaifiyat);

    return 0;
}
*/

/*Example 2
C dilinde bir program yazınız. Programda 3 fonksiyon bulunacaktır.
1- float CalculateCirlceArea(int radius)
2- float CalculateAreaSquare(int edge)
3- float CalculateAreaTriangle(int base, int height)

Program kullanıcıya switch-case yapısı ile istediğini seçme imkanı sunmalıdır.