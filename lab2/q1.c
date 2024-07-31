#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(int argc, char *argv[])
{
    int a, b;
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
// gcc q1.c -o q1
// ./q1 10 20