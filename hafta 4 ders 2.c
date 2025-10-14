//#include<stdio.h>
//int main(){
    //Example 1
//klavyeden girilem bir sayının 1 ile 100 arasından olup olmadığını ekrana yazdıran C kodu
   /* int x;
    printf("bir sayi girin: ");
    scanf("%d", &x);

    if(x>1 && x<100){//burası önemli "1<x<100" diye bir şey yok bunları "&&" ile birbirine bağlaman gerekiyor.
  //if((x>1)&&(x<100)){} şeklinde de gidebilirsin.
        printf("%d sayisi 1 ile 100 arasindadir", x);
    }
    else{
        printf("%d sayisi 1 ile 100 arasinda degildir", x);
    }
    */

   //((x > 1) && (x < 100)) ? printf("%d 1 ile 100 arasindadir", x) : printf("%d 1 ile 100 arasinda degildir");//tek satırda da yapabilirsin bu şekilde
    //                   burası if doğru ise çalışıyor                burası da if doğru değilse yani else kısmı oluyor

    //Example 2
    //klavyeden girilen 2 sayidan büyük olanı ekrana yazdiran C kodunu tek satırda(üçlü işleç şeklinde) yazınız.
    /*int x,y;
    printf("iki sayi giriniz: ");
    scanf("%d\n%d",&x ,&y);

    (x>y) ? printf("%d büyük olan sayidir",x) : printf("%d büyük olan sayidir",y);
    */

    //Example 3 SWITCH VE BREAK ÖĞRENIMI ILK KEZ GORUYORSUN
    //haftanin günlerini yazdıran C kodu
main(){

    int day;
    printf("1 ile 7 arasinda bir deger girin\n haftanin hangi günündesiniz:\n ");
    scanf("%d", &day);

    switch(day){
        case 1:
            printf("Pazartesi");
            break;
        case 2:
            printf("Sali");
            break;
        case 3:
            printf("Carsamba");
            break;
        case 4:
            printf("Persembe");
            break;
        case 5:
            printf("Cuma");
            break;
        case 6:
            printf("Cumartesi");
            break;
        case 7:
            printf("Pazar");
            break;
        default:
            printf("Hayirli haftalar!");

    }

}


//}