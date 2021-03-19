#include <stdio.h>

char ch = 'a';
int i = 1190200523;
unsigned int ui = 1190200523;
short sh = 11902;
unsigned short ush = 11902;
long l = 1190200523;
unsigned long ul = 1190200523;
float f = 1190200523;
double d = 1190200523;

int main()
{
    printf("int %d %x %x\n",i,&i,i);
    printf("char %c %x %x\n",ch,&ch,ch);
    printf("short %d %x %x\n",sh,&sh,sh);
    printf("long %ld %x %x\n",l,&l,l);
    printf("float %f %x %x\n",f,&f,f);
    printf("double %lf %x %x\n",d,&d,d);
    return 0;
}