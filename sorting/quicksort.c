#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int a[], int low, int high)
{
    int pivot;
    int i;
    int j;

    pivot = a[low];
    i = low;
    j = high;

    while(1) {
        while(a[i] < pivot && a[i] != pivot) {
            i++;
        }
        while(a[j] > pivot && a[j] != pivot) {
            j--;
        }
        if(i < j) {
            swap(&a[i], &a[j]);
        } else {
            return j;
        }
    }
}

void quicksort(int a[], int low, int high)
{
    int p;
    if(low < high) {
        p = partition(a, low, high);
        quicksort(a, low, p-1);
        quicksort(a, p+1, high);
    }
}

void main()
{
    int a[10], n, i;

    printf("Enter the number of elements");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    quicksort(a, 0, n-1);

    printf("Array after sorting\n");
    for(i = 0; i < n; i++) {
        printf("%d", a[i]);
    }
}
