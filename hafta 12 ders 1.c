/* !!!!!!! İşaretçiler (pointers)
& dediğimiz şey referans operatörü oluyor (adres)
*/
/*
#include <stdio.h>

main(){
    int count = 5;

    printf("%d\n", count);
    printf("%p\n", &count);
}
*/
/*
#include <stdio.h>
int main(){
    int age = 18;//An int variable
    int* ptr = &age;//A pointer variable, with the name ptr, that stores the address of age

    printf("%d\n", age);//output the value of age(18)
    printf("%p\n", &age);
    printf("%p\n", &ptr);
}
*/
/*
#include <stdio.h>
int main(){
    int y = 5;
    int *yPtr;

    yPtr = &y;

    printf("%d\n", *yPtr);
    printf("%d", yPtr);
}
*/
//    & adres bilgisi getirir(aka ilk printf)
//    * ise bu adresin içerisindeki değeri getirir.(aka ikinci printf)
/*
#include <stdio.h>
int main(){
    int age = 43;// Variable declaration
    int* ptr = &age;// Pointer declaration

    printf("%p\n", ptr);// Reference: Output memory address of age with the pointer.

    printf("%d\n", *ptr);// Dereference: Output the value of age with the pointer (43)
}
*/
//pointer için ya * int yada char gibi şeye yapışık olacak yada diğerine
// int* mynumber = .. yada int *mynumber = ... gibi
/*
#include <stdio.h>
int main(){
    int a = 7;
    int *aPtr = &a;

    printf("%p   %p\n", &a, aPtr);
    printf("%d  %d\n", a, *aPtr);
    printf("%p  %p\n", &*aPtr, *&aPtr);
    //%p dersem adres beklerim %d dersem değer
}
*/
//pass by value
/*
#include <stdio.h>
int cube(int x);

main(){
    int n = 6;
    printf("%d: ", cube(n));
}

int cube(int x){
    return x*x*x;
}
*/
//pass by reference
/*
#include <stdio.h>

void CubeByReference(int *x);

main(){
    int number = 3;
    CubeByReference(&number);

    printf("%d", number);
}

void CubeByReference(int *x){
    *x = *x * *x * *x;//pointer x times pointer x timer pointer x
}
*/
//Stingerin pointerlar ile kullanımı
//s jarajter dizisindeki tüm karakterlerin büyük harfe dönüştürülmesi isteniyor.
/*
#include <stdio.h>
#include <ctype.h>//char (karakterler) için kullanılan kütüphane

void ConverttoUpper(char *x);

main(){
    char s[] =  "Bugun HaVa Cok BuluTlu 8 Aralik 2025";

    printf("%s\n", s);
    ConverttoUpper(s);
    printf("%s", s);
}

void ConverttoUpper(char *x){
    while(*x != '\0')//Null görene kadar döngü devam edecek.
    {
        *x = toupper(*x);
        ++x;
    }
}
*/
//  !!!!  void göstericiler BURASI ÖNEMLİ sanırım
//yalnızca adres saklama amacıyla kullanılır. Bu yüzden void göstericiler ile diğer tür göstericiler arasında
//yapılan atamalarda uyarı söz konusu olmaz.
/* örnek
void *p;
void *adres;
*/
/*
#include <stdio.h>

fonk (void *p){
    ...
}

main(){
    int *x;
    float *y;

    ...

    fonk(x);
    fonk(y);
}
*/
//!!!!!! const pointers(sabit göstericiler)
//const tür bildiricisiyle gösterilmiş göstericilere sabit göstericiler denir.
//const anahtar sözcüğünü bildirimdeki yerine bağlı olarak sabit göstericilerin değeri değişmektedir
//sabit göstericilere ilişkin 3 farklı kullanım söz konusudur.
//1- gösterildikleri yer sabit olan sabit göstericiler
//bu tür sabit göstericilerde adresin gösterdiği yer değiştirilemez. Ancak göstericinin içeriği değiştirilebilir
//örneğin:
/*
const char *s;
const int *p;
const float *f;
*/
//2- kendisi sabit olan göstericiler
//bu tür sabit göstericilerin gösterdikleri yer değiştirilebilir ancak içerikleri değiştirilmez.
//örn:
/*
char *const s;
int *const p;
*/
//3- hem kendisi hem de gösterdiği yer sabit olan göstericiler
//bu tür sabit göstericilerde ne göstericinin kendisi ne de gösterdiği yer değiştirilebilir.(ikisi de değiştirilemez)
//örn:
/*
const char *const p;
const int *const x;
*/  