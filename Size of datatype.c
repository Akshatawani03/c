#include <stdio.h>
int main()
{
    int a;
    float b;
    double d;
    char c;
    short int e;
    printf("\n Size of int=%lu Bytes", sizeof(a));
    printf("\n Size of float=%lu Bytes", sizeof(b));
    printf("\n Size of double=%lu Bytes", sizeof(d));
    printf("\n Size of char=%lu Bytes", sizeof(c));
    printf("\n Size of short int=%lu Bytes", sizeof(e));
    return 0;
}