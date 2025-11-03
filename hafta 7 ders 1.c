//this lesson is just examples nothing new
/*Example 1
Aşağıdaki menüyü ekrana yazdırınız:
1 – Dairenin Alanını Hesapla
2 – Üçgenin Alanını Hesapla
3 – Karenin Alanını Hesapla
4 – Çıkış
Kullanıcı bir seçim yapar ve ilgili şeklin kenar veya yarıçap bilgisi girilerek alan hesabı yapılır.
*/
/* 
#include<stdio.h>
int main(){
    int x;
    int a;
    float pi=3.14;
    float da;
    int b;
    int h;
    float ua;
    int k;
    int ka;
    printf("Bir ile dört arasında bir sayı seçin.\n1- Dairenin Alanını Hesapla\n2- Üçgenin Alanını Hesapla\n3- Karenin Alanını Hesapla\n4- Çıkış\n");
    scanf("%d", &x);
    if(x==1){
        printf("dairenin yarıçapını tamsayı olarak giriniz: ");
        scanf("%d", &a);
        da=pi * (a*a);
        printf("Dairenin alanı= %.2f * %d^2 = %.2f",pi, a, da );

    }
    else if(x==2){
        printf("üçgenin alanının hesaplanması için taban ve yükseklik olmak üzere 2 tam sayı değeri gir: ");
        scanf("%d%d", &b, &h);
        ua=(b*h)/2;
        printf("üçgenin alanı= (%d * %d)/2=%f", b, h, ua);
    }  
    else if(x==3){
        printf("karenin alanını bulmak için karenin kenarını tam sayı olarak girin: ");
        scanf("%d", &k);
        ka=k*k;
        printf("karenin alanı= %d*%d=%d", k, k, ka);
    }
    else if(x==4){
        printf("çıkış tuşuna bastınız. iyi günler.");
    }
    else{
        printf("geçerli bir aralık girmediniz.");
    }

}
*/
/*Example 2
Kullanıcıdan bir tam sayı alınız.
Bu sayının palindrom sayı olup olmadığını kontrol eden bir C programı yazınız.
(Örnek: Girdi: 12321 → Palindrom, Girdi: 12345 → Değil)
*/
/*
#include <stdio.h>
int main(){
    int a,b,c,d,e,f,g;
    printf("sırasıyla 7 rakam gir. girdiğin sıraya göre sayı palindrom sayı mı değil mi söyleyeyim: ");
    scanf("%d%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f, &g);
    if((a==g)&&(b==f)&&(c==e)){
        printf("girdiğiniz %d%d%d%d%d%d%d sayısı palindrom sayıdır.",a,b,c,d,e,f,g);
    }
    else{
        printf("girdiğiniz %d%d%d%d%d%d%d sayısı palindrom sayı değildir.",a,b,c,d,e,f,g);
    }
}
*/