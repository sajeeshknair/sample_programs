#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
}

void max_heapify(int a[], int i, int n)
{
    int lc, rc, large;

    lc = 2 * i + 1;
    rc = 2 * i + 2;

    large = i;

    if(lc < n && a[lc] > a[i]) {
        large = lc;
    }
    
    if (rc < n && a[rc] > a[large]) {
        large = rc;
    }

    if (large != i) {
        swap(&a[i], &a[large]); 
        max_heapify(a, large, n);
    }
}

void build_max_heap(int a[], int n)
{
    int i;

    for(i = (n-2)/2; i >= 0; i--) {
        max_heapify(a, i, n);
    }
}

void heapsort(int a[], int n)
{
    int i;

    build_max_heap(a, n);
    
    for(i = 0; i < n; i++) {
        swap(&a[(n-1)-i], &a[0]);
        max_heapify(a, 0, (n-1)-i);
    }
}

void main()
{
    int *a;
    int n, i;

    printf("Enter the number of elements \n");
    scanf("%d", &n);

    a = (int *) (malloc(sizeof(int) * n));

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    build_max_heap(a,n);

    printf("Elements in heap\n");
    for(i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }

    heapsort(a, n);
    
    printf("Elements after heapsort\n");
    for(i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }
}



