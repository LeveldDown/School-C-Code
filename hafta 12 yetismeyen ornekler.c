/*
//using indexing and pointer natotions with arrays
#include <stdio.h>
#define Array_size 4

int main(void){
    int b[] = {10, 20, 30, 40};// create and initialize array b
    int *bPtr = b;// create bPtr and point it to array b

    // output array b using array index notation
    puts("Array b printed with:\nArray index notation");

    //loop through array b
    for(size_t i = 0; i< Array_size; ++i){
        printf("b[%u] = %d\n", i, b[i]);
    }

    //output array b using array name and pointer/offset notation
    puts("\nPointer/offset notation where\n"
         "the pointer is the array name");

    //loop through array b
    for(size_t offset = 0; offset < Array_size; ++offset){
        printf("*(b + %u) = %d\n", offset, *(b + offset));
    }

    //output array b using bPtr and array index notation
    puts("\nPointer index notation");

    //loop through array b
    for(size_t i = 0; i < Array_size; ++i){
        printf("bPtr[%u] = %d\n", i, bPtr[i]);
    }

    //output array b using bPtr and pointer/offset notation
    puts("\nPointer/offset notation");

    //loop through array b
    for(size_t offset = 0; offset < Array_size; ++offset){
        printf("*(bPtr + %u) = %d\n", offset, *(bPtr + offset));
    }

}
*/

/*
//copying a string using array notation and pointer notation
#include <stdio.h>
#define SIZE 10

void copy1(char * const s1, const char * const s2);//prototype
void copy2(char *s1, const char *s2);//prototype

int main(void){
    char string1[SIZE];//create array string1
    char *string2 = "Hello";//create a pointer to a string

    copy1(string1, string2);
    printf("string1 = %s\n", string1);

    char string3[SIZE];//create array string3
    char string4[] = "Good Bye";//create an array containing a string

    copy2(string3, string4);
    printf("string3 = %s\n", string3);
}
*/

/* BURADA HATA VAR ÇALIŞMIYOR
//multipurpose sorting program using function pointers.
#include <stdio.h>
#define size 10

//Prototypes
void bubble(int work[], size_t size, int(*compare)(int a, int b));
int ascending(int a, int b);
int descending(int a, int b);

int main(void){
    //initialize unordered array a
    int a[size] = {2,4,6,8,10,12,89,68,45,37};

    printf("%s", "Enter 1 to sort in ascending order,\n"
                 "Enter 2 to sort in descending order: ");

    int order;// 1 for ascending order 2 for descending order
    scanf("%d", &order);

    puts("\nData items in original order");

    //output original array
    for(size_t counter = 0; counter < size; ++counter){
        printf("%5d", a[counter]);
    }
    //sort array in ascending order; pass function ascending as an
    //argument to specify ascending sorting order
    if(order == 1){
        bubble(a, size, ascending);
        puts("\nData items in ascending order");
    }
    else{// pass function to descending
        bubble(a, size, descending);
        puts("\nData items in descending order");
    }

    //output sorted array
    for(size_t counter = 0; counter < size; ++counter){
        printf("%5d", a[counter]);
    }

    puts ("\n");

    //multipurpose bubble sort; parameter compare is a pointer to
    //the comparison function that determines sorting order
    void bubble(int work[], size_t size, int (*compare)(int a, int b)){
        void swap(int *element1Ptr, int *element2Ptr);//prototype

        //loop to control passes
        for(unsigned int pass = 1; pass < size; ++pass){

            //loop to control number of comparison per pass
            for(size_t count = 0; count < size - 1; ++count){

                //if adjacent elements are out of order, swap them
                if((*compare)(work[count], work[count + 1])){
                    swap(&work[count], &work[count + 1 ]);
                }
            }
        }
    }

    //swap values at memory locations which element1Ptr and
    //element2Ptr point
    void swap(int *element1Ptr, int *element2Ptr){

        int hold = *element1Ptr;
        *element1Ptr = *element2Ptr;
        *element2Ptr = hold;
    }

    //determine whether elements are out of order for an ascending
    //order sort
    int ascending(int a, int b){
        return b<a; // should swap if b is less then a
    }
    //determine whether elements are out of order for a descending
    //order sort
    int descending(int a, int b){
        return b>a; // should swap if b is greater then a
    }

}
*/

/*
//Demonstrating an array of pointers to functions.
#include <stdio.h>

//prototypes
void function1(int a);
void function2(int b);
void function3(int c);

int main(void){
    //initialize array of 3 pointers to functions that each take an
    //int argument and return void
    void(*f[3])(int) = {function1, function2, function3};

    printf("%s", "Enter a number between 0 and 2, 3 to end: ");
    size_t choice; // variable to hold user's choice
    scanf("%u", &choice);

    //process user's choice
    while(choice >= 0 && choice < 3){
        //invoke function at location choice in array f and pass
        //choise as an argument
        (*f[choice])(choice);

        printf("%s","Enter a number between 0 abd 2, 3 to end: ");
        scanf("%u", &choice);
    }

    puts("Program execution completed.");

}

void function1(int a){
    printf("You entered %d so function1 was called\n\n", a);
}
void function2(int b){
    printf("You entered %d so function2 was called\n\n", b);
}
void function3(int c){
    printf("You entered %d so function3 was called\n\n", c);
}
*/