//program to print the 2 arrays

#include <stdio.h>
#include <stdlib.h>

int i = 0;

int main(){
    int i = i;
    int a[] = {1, 2, 3, 4, 5, 6};
    int b[] = {7, 8, 9, 10, 11, 12, 13};

    int n = sizeof(a)/sizeof(a[0]);
    int m = sizeof(b)/sizeof(b[0]);

    for(int i=0;i<n;i++);{
        printf("%d ", a[i]);
    }
    printf("\n");
    for(i;i<m;i++){
        printf("%d ", b[i]);
    }
}
