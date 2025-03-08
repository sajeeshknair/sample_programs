#include <stdio.h>

void main()
{
    int a[10], n, key, i , j;

    printf("Enter the no:of elements\n");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 1; i < n; i++) {
        key = a[i];
        j = i;
        while(j > 0 && a[j-1] > key) {
            a[j] = a[j-1];
            j = j-1;
        }
        a[j] = key;
    }

    printf("The sorted list is\n");
    for(i = 0; i < n; i++) {
        printf("%d", a[i]);
    }
}

