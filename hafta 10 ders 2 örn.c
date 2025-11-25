//1'den 10'a kadar sayıların karesini hesaplayan bir C fonksiyon yazın.
/*
#include <stdio.h>
int kare(int x);
int kare(int x){
    return x*x;
}

main(){
for(int x=1; x<11; x++){
    printf("%d\n", kare(x));
}


}
*/
//yaş hesaplama fonksiyonu yap.
/*
#include <stdio.h>
int agecalc(int birthyear){
    int age;
    int currentyear = 2025;

    if(birthyear <= 0){
        return -1;
    }
    if(birthyear > currentyear){
        return -2;
    }

    else {
        age = currentyear - birthyear;
    }
}

void printage(int age){
    int currentyear, birthyear;

    if (age == -1){
        printf("doğum yılı sıfırdan küçük olmamalı.");
    }
    else if(age == -2){
        printf("şuanki yıl doğum yılınızdan küçük olamaz.");
    }
    else {
        printf("Your age is: %d", age);
    }

}

int main(){

int birthyear;
int age;
int currentyear;

    printf("Please enter your birth year: ");
    scanf("%d", &birthyear);

    age = agecalc(birthyear);
    printage(age);


}
*/
//geometrik şekillerin alanlarını fonksiyon kullanarak yaz.
//tam yapamadım tekrar bak!!!
#include <stdio.h>
#include <math.h>
float karealan(float k){
    return k*k;
}
float ucgenalan(float taban, float yukseklik){
    return (taban*yukseklik)/2;
}
float dairealan(float d){
    float pi=3.141592;
    return pi * d * d;
}

int main(){
    int i, k, taban, yukseklik, d;
    float karealan;
    float ucgenalan;
    float dairealan;
    printf("birini seç:\n1-karenin alanını hesapla\n2- üçgenin alanını hesapla\n3- dairenin alanını hesapla\n");
    scanf("%d", &i);

    if (i=1){
        printf("karenin kenar uzunluğunu giriniz: ");
        scanf("%f", &k);
        printf("karenin alanı = %f", karealan);

    }
}