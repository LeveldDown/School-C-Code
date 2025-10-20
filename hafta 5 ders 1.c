#include<stdio.h>
int main(){
    //BURASI KOMPLE "LOOP" HAKKINDA!!
        //Example 1: "While"
 /*   int x=1;
    while(x<1000){//1 ile n arasındaki sayıların yazdırılmasında kod "n" kez çalışır
        printf("%d\n",x);
        x++;
    }
 */


        //Example 2: "do - while"
   /* int x=1;
    do{
        printf("sayi %d\n", x);
        x++;
    }
    while(x<1000);
    //döngüler program akışını değiştirdiği için kontrol deyimlerinin ve tekrarlanan deyimlerin kullanılmasını sağlar
    */


   //Example 3:"100 den 1 e kadar olan sayıları yazdır"
   /*  int x=100;
   do{
    printf("sayi %d\n", x);
    x--;
   }
   while(x>1);
   */

    //Example 4: "for"
   /* int x;
    for(x=1; x<1000; x++)
    printf("%d\n", x);
    */

   //Example 5: ekrana 5 defa  "merhaba" yazdıran C kodunu yazın.
   /*  int x=1;
    do{
        printf("merhaba\n");
        x++;
    }
    while(x<6);
    */

   //1 den 10 a kadar sayıların toplamını ekrana yazdıran C kodunu yazınız(beceremedim buraya çalış) 
   int x, toplam=0;
   for(x=1; x<=10; x++)
   {
   toplam = toplam+x;
   }
   printf("toplam = %d", toplam);
   
   

}