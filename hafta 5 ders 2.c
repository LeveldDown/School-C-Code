#include<stdio.h>
int main(){
//Example 1: 1 ile 100 arasındaki çift sayıları listeleyin
  /*  int x=2;
    do{
        printf("%d, ", x);
        x=x+2;

    }
    while(x<100);
  */

    /*Bunun haricinde:
     for(a=1; a<100; a++){
        if((a % 2) == 0)
    }
    printf("%d", x); şeklinde de yazabiliyorum.
    */
   //BREAK ÖRNEĞİ
  /* int x;//declared here so it can be used after loop
   
   for(x = 1; x<=10; ++x){//loop 10 times
   
    if (x==5){//if x is equal to 5 terminate the loop
   
        break;//break loop only if x is equal to 5
    }
    printf("%d, ",x);
   }
   printf("\ndöngüden çıkma değeri: %d", x);
   */
  
    //CONTİNUE ÖRNEĞİ
  /*   int x;//declared here so it can be used after loop
   
   for(x = 1; x<=10; ++x){//loop 10 times
   
    if (x==5){//if x is equal to 5, skip 5 and continue the loop
   
        continue;//skip the value of x if only x is equal to 5
    }
    printf("%d, ",x);
   }
  */
//1 ile 100 arasındaki sayıların toplamını, ortalamasını hesaplayan C kodunu yazınız
  /*  int x, toplam=0;
    double ortalama;
    for(x=1; x<100; x++){
        toplam=toplam+x;
    }
    printf("1 ile 100 arasındaki sayıların toplamı: %d", toplam);
    ortalama=toplam/99;
    printf("\nortalaması ise: %lf",ortalama);
  */
//1 ile 10 arasındaki değerlerin çarpımını hesaplayan C kodunu yazın.
   /* int x;
    float carpim=1;
    for(x=1; x<10; x++){
        carpim=carpim*x;
    }
    printf("1 ile 10 arasındaki sayıların çarpımı: %lf", carpim);
   */
// 1 ile 100 arasındaki tek sayıları ekrana yazdıran C kodunu yazın.
//ekstradan sayı adedini de yazdırmayı görüyoruz.
  int x=1, adet=0;
    for(x=1; x<100; x=x+2){
        printf("%d, ",x);
        adet++;
    }
    printf("\n1 ile 100 arasındaki tek sayı adedi: %d",adet);
}