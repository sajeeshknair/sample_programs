#include <stdio.h>

void main()
{
    int a[10];
    int i, j, t;

    printf("Enter the elements [0 and 1]");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    i = 0;
    j = 9;
    while (i < j) {
        while (a[i] == 0 && i < j) {
            i++;
        }
        while (a[j] == 1 && i < j) {
            j--;
        }
            t = a[i];
            a[i] = a[j];
            a[j] = t;
    }

    /*
     * print the elements
     */
    for (i = 0; i < 10; i++) {
        printf("%d\t", a[i]);
    }
}
