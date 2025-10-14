    //Example 3 SWITCH VE BREAK ÖĞRENIMI ILK KEZ GORUYORSUN
    //haftanin günlerini yazdıran C kodu
/*#include<stdio.h>
int main(){

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
*/


//Example: klavyeden girilen 3 farklı sayıdan en büyüğünü ekrana yazdıran problemin akış şemasını çiziniz ve C kodunu yazınız.
#include<stdio.h>
int main(){
    int x,y,z;
    printf("3 farkli sayi giriniz: ");
    scanf("%d\n%d\n%d",&x ,&y, &z);

    if((x>y) && (x>z)){
        printf("en büyük sayi %d'dir", x);
    }
    else if((y>z) && (y>x)){
        printf("en büyük sayi %d'dir", y);
    }
    else{
        printf("en büyük sayi %d'dir", z);
    }
}