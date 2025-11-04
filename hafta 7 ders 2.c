//Example 1
//Klavyeden bir tamsayı giriniz.
//Girilen sayıdan küçük olan 1 ile 100 arasındaki tüm çift sayıları ekrana listeleyen bir C programı yazınız.
/*
#include <stdio.h>
int main(){
    int x;
    printf("klavyeden bir tamsayı giriniz: ");
    scanf("%d", &x);
    if(x%2==0){
    do{
        x=x-2;
        printf("%d, ",x);
    }
    while((x>1)&&(x<100));
    }
    else{
        x=x-1;
        do{
            printf("%d, ",x);
            x=x-2;
        }
        while((x>1)&&(x<100));
    }
    }
*/
//Example 2
//Klavyeden girilen sayının pozitif, negatif veya sıfır olduğunu ekrana yazdıran bir C programı yazınız.

/*
#include <stdio.h>
int main(){
    int x;
    printf("klavyeden bir tam sayı girin: ");
    scanf("%d", &x);
    if(x<0){
        printf("girilen %d sayısı negatiftir.",x);
    }
    else if(x>0){
        printf("girilen %d sayısı pozitiftir.",x);
    }
    else{
        printf("girilen sayı sıfırdır.");
    }
}
*/
//Example 3
//Klavyeden girilen bir sayının faktöriyelini hesaplayan bir C programı yazınız.
//(Örnek: Girdi=5 → Çıktı=120)
#include <stdio.h>
int main(){
    int x, carpim=x;
    printf("klavyeden pozitif bir tam sayı girin: ");
    scanf("%d", &x);
    do{
        x*(x-1)=carpim;
        x--;
    }
    while(x>0);
    printf("%d", carpim);

}