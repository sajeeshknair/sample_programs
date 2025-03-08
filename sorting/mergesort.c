#include<stdio.h>
#include<stdlib.h>


void merge(int a[], int l, int m, int h)
{
    int i, j, k;
    int *b;

    b = (int *) (malloc(sizeof(int) * (l + h + 1)));

    for(i = l; i <= h; i++) {
        b[i] = a[i];
    }

    i = k = l;
    j = m + 1;

    while(i <= m && j <= h) {
        a[k++] = (b[i] < b[j]) ? b[i++] : b[j++];
    }

    while(i <= m) {
        a[k++] = b[i++];
    }

    while(j <= h) {
        a[k++] = b[j++];
    }
}


void mergesort(int a[], int l, int h)
{
    int m;

    if(l < h) {
        m = (l + h) / 2;
        mergesort(a, l, m);
        mergesort(a, m + 1, h);
        merge(a, l, m, h);
    }
    return;
}


void main()
{
    int n, i;
    int *a;

    printf("Enter the number of elements\n");
    scanf("%d", &n);

    a = (int *) (malloc(sizeof(int) * n));

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    mergesort(a, 0, n-1);

    for(i = 0; i < n; i++) {
        printf("%d", a[i]);
    }
}

