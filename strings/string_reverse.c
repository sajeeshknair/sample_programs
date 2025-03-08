#include <stdio.h>
#include <stdlib.h>

void reverse(char *);

main()
{
    char *s;
    s = (char *) (malloc(sizeof(char) * 10));
    printf("enter the string to be reversed\n");
    scanf("%s",s);
    if (s != NULL) {
        reverse(s);
        printf("Reversed string is %s\n",s);
    }
}

void reverse(char *string)
{
    int len;
    int count;
    char c;
    for(len = 0; string[len] != '\0'; len++);
    for(count = 0, len--; len > count; count++, len--) {
        c = string[len];
        string[len] = string[count];
        string[count] = c;
    }
}

