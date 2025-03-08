#include <stdio.h>

void swap(int *, int *);

void main()
{
    int a[10];
    int i, low, mid, high;

    low = 0;
    mid = 0;
    high = 9;

    printf("Enter the numbers\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    while(mid <= high) {
        switch (a[mid]) {
            case 0:
                swap(&a[low++], &a[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(&a[mid], &a[high--]);
                break;
        }
    }

    for(i = 0; i < 10; i++) {
        printf("%d", a[i]);
    }
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
