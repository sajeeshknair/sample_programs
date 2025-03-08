#include <stdio.h>

//#define SETBITS(x, p, n) (x |= ((1 << (p - 1) - 1) ^ ((1 << (n) - 1))))

void bitcount(x)
{
    int n = 0;

    while (x)
    {
        x &= (x-1);
        n++;
    }
    printf("The bit count is: %d\n", n);
}

int main()
{
    int n = 0;
    unsigned int x;
    int l, r, range;

    printf("Enter the number\n");
    scanf("%d", &x);
    
    bitcount(x);
    l = 2;
    r = 3;
  //  SETBITS(x, 2, 3);
    range = (((1 << (l - 1)) - 1) ^   
                ((1 << (r)) - 1));

    x = x | range;
    

    printf("The number is %d", x);

    return 0;
 /*
  * Looping through technique
  * while (x != 0)
    {
        if (x & 01) {
            n++;
        }
        x = x >> 1;
    }

    printf("The bit count is:%d\n",n);
    *
    */
}
