/*
 * Program to sort numbers based on the number
 * the binary 1's in it.
 * Sorting should be in decreasing order of number of 1's in it.
 *
 * For eg:- {2, 4, 1, 31, 15} should be sorted as {31, 15, 4, 2, 1}
 * In this exapmle, 1, 2, 4 have same number of binary 1's. in that case
 * number should be sorted based on the decimal value.
 */

#include <stdio.h>
#include <stdlib.h>

void count_bits(int a[], int b[],int n)
{
    int x, i, count;

    for(i = 0; i < n; i++) {
        x = a[i];
        count = 0;
        while(x) {
            if (x &= (x-1)) {
                count++;
            }
        }
        b[i] = count;
    }
}

void binary_sort(int a[], int b[], int n)
{
    int i, j, temp;

    for(i = 0; i < n; i++) {
        for(j = 1; j < n; j++) {
            if(b[j-1] < b[j]) {
                temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;
                temp = b[j-1];
                b[j-1] = b[j];
                b[j] = temp;
            }
            else if(b[j-1] == b[j]) {
                if(a[j-1] < a[j]) {
                    temp = a[j-1];
                    a[j-1] = a[j];
                    a[j] = temp;
                    temp = b[j-1];
                    b[j-1] = b[j];
                    b[j] = temp;
                }
            }
        }
    }
}

void main()
{
    int *a, *b, i, n;

    printf("Enter the number of numbers\n");
    scanf("%d", &n);

    b = (int *) malloc(sizeof(int) * n);
    a = (int *) malloc(sizeof(int) * n);

    for(i = 0; i < n; i ++) {
        scanf("%d", &a[i]);
    }

    count_bits(a, b, n);

    binary_sort(a, b, n);

    for(i = 0; i<n; i++) {
        printf("%d ", a[i]);
    }
}
