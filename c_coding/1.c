int global_variable = 10; 
#define process 10
#include<stdio.h>

int main(){
 
    int a = 10;
    int c = a+global_variable+process;
    printf("%d the result for addition\n",c);
}
