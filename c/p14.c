//program to convert given roman expression to it's integer form

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int romanToInt(char * s){
    int *a = (int *)malloc(strlen(s) * sizeof(int));
    for(int i=0;i<strlen(s);i++){
        switch(s[i]){
            case 'I': a[i] = 1; break;
            case 'V': a[i] = 5; break;
            case 'X': a[i] = 10; break;
            case 'L': a[i] = 50; break;
            case 'C': a[i] = 100; break;
            case 'D': a[i] = 500; break;
            case 'M': a[i] = 1000; break;
        }
    }
    int num=0;
    for(int i=0;i<strlen(s)-1;i++){
        if(a[i] < a[i+1]){
            a[i+1] -= a[i];
        }
        num += a[i];
    }
    num += a[strlen(s) - 1];
    return num;
}

int main() {
    char roman[10] = "MMXXIV";
    printf("%d", romanToInt(roman));
}
