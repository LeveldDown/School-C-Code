/*
#include <stdio.h>
float tutarhesapla(float weight){
    if(weight <= 2){
       return 35;
    }
    else{
        weight = weight-2;
        return 35 + (weight*8);
    }
}
int main(){
    float x;
    printf("kargonuzun ağırlığını kilogram cinsinde giriniz (ondalıklı olabilir): ");
    scanf("%f", &x);

    float fiyat = tutarhesapla(x);
    printf("kargolama ücreti: %.2f TL\n", fiyat);
}
*/

/*   //chatgpt yaptı bunu anlamadım?
#include <stdio.h>
void zamanhesapla(int dakika, int *saat, int *dakika_son){
    *saat = dakika / 60;
    *dakika_son = dakika % 60;
}

int main(){
    int x;
    printf("lütfen pişirme süresini dakika cinsinden giriniz: ");
    scanf("%d", &x);
    
    int saat, dakika_son;
    zamanhesapla(x, &saat, &dakika_son);
    
    printf("pişirme süresi: %d:%d", saat, dakika_son);
}
*/

/* //hocanın yaptığı
#include <stdio.h>
void dakikacevir(int totalminutes, int hour, int minutes){
    hour = totalminutes / 60;
    minutes = totalminutes % 60;
    printf("time: %d saat : %d dakika", hour, minutes);
}

int main(){
    int dk, h, m;
    printf("Please enter your cooking time as minutes: ");
    scanf("%d", &dk);

    dakikacevir(dk, h, m);//dakikacevir(int totalminutes, int hour, int minutes) voidi sil totalmins yerine dk kullandım onu yaz int'e gerek yok zaten tanımlı vs.
}
*/
//kullanıcıdan n tane sayı alıp bu sayılar üzerinde çeşitli matematiksel işlemler yapan bir program yap
//her işlemin ayrı bir fonksiyon içinde yazılması zorunludur.
/*
toplam
ortalama
max
min
mod
meydan
*/
