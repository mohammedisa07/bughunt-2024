//allocating memory to a pointer through a function

#include<stdio.h>
int *fun()
{
    int x = 5;
    return &x;
}
int main()
{
    int *ptr = fun ();
    printf ("%d", *ptr);
    return 0;
}
