#include <stdio.h>

int i = 199;
int *ip = &i;
int ay[3] = {0, 1, 2};
struct node
{
    int x;
}Node;

union Token
{
   char cval;
   int ival;
}un;
enum color_set
{
    RED,
    BLUE
}em;

typedef unsigned char *byte_pointer;
void show_bytes(byte_pointer start,size_t len)
{
    size_t i;
    printf("\tHex:");
    for (i = 0; i < len; i++)
    {
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

int main()
{
    puts("pointer:");
    printf("\tName: ip\n");
    printf("\tContent: %X\n", ip);
    printf("\tAddr: %X\n", &ip);
    show_bytes((byte_pointer)&ip, sizeof(int *));

    puts("array:");
    printf("\tName: ay[0], ay[1], ay[2]\n");
    printf("\tContent: %d\n", ay[0], ay[1], ay[2]);
    printf("\tAddr: %X\n", &ay[0], &ay[1], &ay[2]);
    show_bytes((byte_pointer)&ay[0], sizeof(int));
    show_bytes((byte_pointer)&ay[1], sizeof(int));
    show_bytes((byte_pointer)&ay[2], sizeof(int));

    puts("struct:");
    printf("\tName: Node\n");
    printf("\tContent: %X\n", ip);
    printf("\tAddr: %X\n", &ip);
    show_bytes((byte_pointer)&ip, sizeof(int *));
    return 0;
}