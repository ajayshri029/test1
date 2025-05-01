/* 
 c pragram compilation process 
 1. preprocessing -> file.i -> gcc -E file.c -o file.i
 2. compiler      -> file.s -> gcc -S file.i -o file.s  
 3. assembler     -> file.o -> gcc -s file.s -o file.o
 4. linker        -> a.out -> gcc file.o  
 5. loader
*/


#define preprocessing_1 12
#define preprocessing_2 13
#include<stdio.h>
int main(){
    int result;
    result = preprocessing_1 + preprocessing_2;
    printf("here is your result = %d\n",result);
}