#include <stdio.h>

void main()
{
    int a[10], n, i, j, temp;

    printf("Enter the no: of elements \n");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++) {
        for(j = 1; j < n; j++) {
            if(a[j-1] > a[j]) {
                temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("The sorted list is\n");

    for(i = 0; i < n; i++) {
        printf("%d", a[i]);
    }
}
