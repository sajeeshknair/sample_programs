/*
 * Program to search a pattern in a
 * given string
 */

#include <stdio.h>

char* search_pattern(char *s, char *p)
{
    int len = 0;
	int foo = 0;
    int i;


    /* find the length of the pattern */
    for(i = 0; *(p + i) != '\0'; i++);
    i--;

    while (*s != '\0') {
        len = i;
        if(*s == p[0]) {
            while((*(s + len) == *(p + len)) && (len > 0)) {
                len--;
            }
            if (len == 0) {
				foo = 1;
                return s;
            }
        }
        s++;
    }

	if (!foo) {
		s = NULL;
	}
    return s;
}


void main()
{
    char s[100], p[50];
    char *c = NULL;

    printf("Enter the string and pattern to search\n");
	fflush(stdin);
    fgets(s, 100, stdin);
	fflush(stdin);
	fgets(p, 50, stdin);

    c = search_pattern(s, p);

    if(c) {
        printf("found it..%s\n", c);
    }
    else 
        printf("no such pattern..\n");
}






