/*
    c code compilation process  :
1. preprocessing :  file.i -> gcc -E file.c -o file.i
2. compiler : file.s -> gcc -S file.i -o file.s
2. assemler : file.o -> gcc -c file.s -o file.o
3. linker : a.out -> gcc file.o
4.loading-> into the target computer
*/

#define preprocessing_1 15
#define preprocessing_2 20
#include<stdio.h>
int main(){
    int result;
    result = preprocessing_1 + preprocessing_2;
    printf("here is your results %d\n",result);
}

