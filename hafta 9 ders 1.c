/*
Aynı tipte çok sayıda verileriniz varsa o zaman "diziler" kullanılır
Example:
XX int:x1,x2,x3,x4......; yerine

int A[] = {1,2,3,4,5,6,7};
Dizinin türü: int
Dizinin adı: A[]
A[0]=1--> A'nın 0. elemanı =
A[1]=2--> A'nın 1. elemanı = vs.
A[2]=3
A[3]=4
A[4]=5
A[5]=6
A[6]=7
A dizimin boyutu: 7
*/
//dizi adı diğer tanımlayıcılar gibi isimlendirilmelidir. gerekli pdf den bak.
/*#include <stdio.h>
int main(){
    int i, C[]= {-45, 6, 0, 72, 1543, -89, 0, 62, -3, 1, 6453, 78};
    //sağ tarafında dizinin elemanları varsa C[] şeklinde de yazılabilir C[12] şeklinde de. 12 eleman sayısıdır.
    for(i=0; i<12; i++)
        printf("C[%d] = %d\n", i, C[i] );

}
*/
/*
#include <stdio.h>
int main(){
    int x[100];// bellekte bunlara yer ayırılıyor.
    int y[29];
    int n[5] = {32, 27, 64, 18, 95, 14};//Arrayindex bound pf except. dizi taşması hatası verir. 5 değeri olabilen diziye 6 değer girilmiş.
}
*/
//10 elemanlı int türden A dizisinin içine klavyeden girilen değeri atayan C kodunu yazınız.
/*
#include <stdio.h>
#define SIZE 10//define-->tanımlamak
main(){
    int A[SIZE], number, i;
    printf("Please enter a number: ");
    scanf("%d", &number);

    for(i=0; i<SIZE; i++)
        A[i] = number;

    for(i=0; i<SIZE; i++)
        printf("A[%d]= %d\n", i, A[i]);
}
*/
/*
#include <stdio.h>
main(){
    char Name[] = {'b', 'a', 'h', 'a', 'd', 'i', 'r', '\0'};
    //'\0'--> dizinin sona geldiğini (NULL)'a geldiğini göstermek için yazılır.

    int i;

    for(i=0; i<7; i++)

        printf("Name[%d] = %c\n", i, Name[i]);
}
*/
//100 elemanlı int türden A dizisinin elemanlarına 2'den başlayarak çift sayıları atayan C kodunu yazınız.
#include <stdio.h>
#define size 100
int main(){
    int A[size], i;
    for(i=0; i<size; i++){
        A[i]= (i+1)*2;

    printf("A[%d] = %d\n", i, A[i]);
    }

}