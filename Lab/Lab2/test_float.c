#include <stdio.h>


int main()
{
    float a = -1.1;
    unsigned *ap = &a;
    printf("0x%x", ap);
    return 0;
}