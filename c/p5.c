//program to increment and print the value of a using a pointer

#include <stdio.h>

void main(){
    int a=10;
    int *ptr = &a;

    *ptr++;
    printf("%d", *ptr);
}
