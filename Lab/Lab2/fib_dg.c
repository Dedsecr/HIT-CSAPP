#include <stdio.h>
int fib1[10000];
long fib2[10000];
unsigned fib3[10000];
unsigned long fib4[10000];
int fib_dg1(int n)
{
    
    if(n == 2 || n == 1)
        return 1;
    else if(n == 0)
        return 0;
    else if(fib1[n])
        return fib1[n];
    return fib1[n] = fib_dg1(n - 1) + fib_dg1(n - 2);
}
long fib_dg2(int n)
{
    if(n == 2 || n == 1)
        return 1;
    else if(n == 0)
        return 0;
    else if(fib2[n])
        return fib2[n];
    return fib2[n] = fib_dg2(n - 1) + fib_dg2(n - 2);
}
unsigned fib_dg3(int n)
{
    if(n == 2 || n == 1)
        return 1;
    else if(n == 0)
        return 0;
    else if(fib3[n])
        return fib3[n];
    return fib3[n] = fib_dg3(n - 1) + fib_dg3(n - 2);
}
unsigned long fib_dg4(int n)
{
    if(n == 2 || n == 1)
        return 1;
    else if(n == 0)
        return 0;
    else if(fib4[n])
        return fib4[n];
    return fib4[n] = fib_dg4(n - 1) + fib_dg4(n - 2);
}
int main()
{
    for (int i = 3;;i++)
    {
        if(fib_dg1(i) > fib_dg1(i + 1))
        {
            printf("%d\n", i + 1);
            break;
        }
    }
    for (int i = 3;;i++)
    {
        if(fib_dg2(i) > fib_dg2(i + 1))
        {
            printf("%d\n", i + 1);
            break;
        }
    }
    for (int i = 3;;i++)
    {
        if(fib_dg3(i) > fib_dg3(i + 1))
        {
            printf("%d\n", i + 1);
            break;
        }
    }
    for (int i = 3;;i++)
    {
        if(fib_dg4(i) > fib_dg4(i + 1))
        {
            printf("%d\n", i + 1);
            break;
        }
    }

    return 0;
}