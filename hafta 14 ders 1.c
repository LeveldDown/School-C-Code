/*
Dinamik Bellek Yönetiminde Fonksiyonlar:
malloc --> (memory allocation)Belirtilen boyutta ham bellek tahsis eder
    Bellek varsayılan olarak sıfırla doldurulmaz; dolayısıyla bu alanın içeriği belirsizdir.

calloc --> (Contiguous Allocation) Bellek tahsisi yapar ve bu belleği sıfırlarla doldurur

realloc --> (Reallocation) daha önce tahsis edilen bellek alanını yeniden boyutlandırır.

free --> Dinamik olarak tahsis edilen bellek alanını serbest bırakır.

Dinamik bellek yönetiminin faydaları
program çalışma zamanında değişken boyutlu bellek ihtiyaçlarını karşılayabileceği için esneklik sağlar
*/

/*
#include <stdio.h>
#include <stdlib.h>//bu fonksiyonları eklemek için (malloc mudur calloc mudur nedir bunlar işte) kullanmalıyım.

int main(){
    int *ogr;
    int ogrSay = 12;

    ogr = calloc(ogrSay,sizeof(*ogr));//bellekten yer alma işlemi

    printf("%d", ogrSay * sizeof(*ogr));

    free(ogr);
}
*/


#include <stdio.h>
#include <stdlib.h>

int main(){
    // 4 sayı için bellekten yer ayırma işlemi:
    int *ptr1, *ptr2, size;

    size = 4 * sizeof(*ptr1);
    ptr1 = malloc(size);
    printf("%d bytes allocated at address %p\n", size, ptr1);


// 16 sayı için bellekten yer ayır
size = 16 * sizeof(*ptr1);
ptr2 = realloc(ptr1, size);
printf("%d bytes reallocated at address %p\n", size, ptr2);

free(ptr2);
}