//klavyeden girilen sayının pozitif mi negatif mi olduğunu ekrana yazdıran C kodunu yazın
#include<stdio.h>
int main(){
    /*int a;
    printf("bir sayi giriniz: ");
    scanf("%d", &a);
    
    if(a>0){
        printf("%d pozitif bir sayidir.", a);
    }
    else{
        printf("%d negatif bir sayidir.", a);
    }
    */
             //klavyeden girilen a ve b tam sayıları için a'nın b'nin tam katı
             //olup olmadığını ekrana yazdıran C kodunu yazın
  /* int a, b;
   printf("iki sayi giriniz: ");
   scanf("%d\n%d", &a, &b);

   if(a%b==0){
    printf("%d sayisi %d sayisinin tam katidir.", a, b);
   }
   else{
    printf("%d sayisi %d sayisinin tam kati degildir.", a, b);
   }
   */
            //example
 /* int x,y,z;
  printf("x sayisini giriniz: ");
    scanf("%d", &x);
    if(x<0){
        int y=(x*x)+(2*x);
        int z=(8*x);
        printf("%d = y\n%d = z", y, z);
    }
    else{
        int y=x;
        int z=(x*x);
        printf("%d = y\n%d = z", y, z);
    }
    */
           //example
           //klavyeden a ve b degerleri giriliyor. "a>b", "a<b" , "a=b"
           //a ile b arasındaki büyüklük ilişkisini ekrana yazdıran C kodunu yazın
    int a,b;
    printf("a ve b sayilarini giriniz: ");
    scanf("%d\n%d", &a, &b);
    
    if(a>b){
        printf("%d > %d", a, b);
    }
    else if(a<b){
        printf("%d < %d", a, b);
    }
    else{
        printf("%d = %d", a, b);
    }

}