/*
#include <stdio.h>
main(){
//  int A [satır] [sütun] = ....
    int i, j, A [3][3] = {{4,8,12},{51,73,54},{40,60,71}};

    //printf("A[0][0] = %d", A[0][0]);
        //hepsini yazdırmak için: for(satırlar)
                //hemen altına da: for(sütunlar) şeklinde iki farklı loopa alınır
//matrisin satır satır ekrana yazdırılması:
/*
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    */
//matrisin sütun sütun ekrana yazdırılması:
/*
for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        printf("%d ", A[j][i]);
    }
    printf("\n");
}
        
    
}
*/
//FONKSİYONLAR!!
//#include <stdio.h>
//#include <math.h>
/*
sqrt= square root
cbrt= cube root
exp= exponential function e^x
log (x)
log10 (x)
fabs(x)= absolute value of x
ceil(x)= rounds x to the smallest integer not less than x
floor(x)= rounds x to the largest integer not greater than x
pow(x, y)= x^y
sin(x)
cos(x)
exc. 
*/
/*
main(){
    printf("%lf\n", sqrt(900.00));
    printf("%lf\n", cbrt(27));
    printf("%lf\n", fabs(-34));
    printf("%lf\n", pow(4, 6));
}
*/
//iki sayının toplamını hesaplayan bir fonksiyon yazalım
//1- declaration(geri dönüş türü varsa: (int, float), yoksa:(void)
//ayrıca fonksiyona okunabilir bir ad ve parametreler tanımlanmalı)
//2- Bildirim yapılır (main blokları dışında)
#include <stdio.h>
int Topla(int x, int y);//declaration
float Topla_Float(float a, float b, float c);
int Carpma (int x, int y, int z, int t);

int topla(int x, int y){  //Bildirim

    return x+y;
}
float Topla_Float(float a, float b, float c){
    return a+b+c;
}
int Carpma(int x, int y, int z, int t){
    return x*y*z*t;
}

main(){
    printf("%d\n", Topla(5, 4));
    printf("%d\n", Topla(90, 80));
    printf("%lf\n", Topla_Float(5.90, 4.987, 4.36));
    printf("%d\n", Carpma(2, 3, 5, 7));

}