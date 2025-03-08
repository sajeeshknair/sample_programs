#include <stdio.h>

unsigned char swap_nibbles(unsigned char x) 
{
    return ((x & 0x0F) << 4 | (x & 0xF0) >> 4);
}

unsigned int swap_bytes(unsigned int y)
{
    return ((y & 0xFF00FF00) | 
            ((y & 0x00FF0000) >> 16) | 
            ((y & 0x000000FF) << 16));
}

void main()
{
    unsigned char c;

    unsigned int x = 0x12345678;

    //printf("enter the character \n");
    //scanf("%c", &c);

    //printf("%c", swap_nibbles(c));
    
    //printf("Enter the number\n");
    //scanf("%d", &x);

    printf("%0X", swap_bytes(x));
}

