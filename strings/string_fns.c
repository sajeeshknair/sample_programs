#include<stdio.h>
#include <string.h>

/*
 * copy t to s
 */
void strcopy(char *s, char *t)
{
    while(*s++ = *t++) {
        ;
    }
}

/*
 * strcomp
 * return < 0 if s<t, 0 if s==t and > 0 if s>t
 */
int strcomp(char *s, char *t)
{
    for(;*s == *t; s++, t++) {
        if(*s == '\0') {
            return (0);
        }
    }
    return (*s - *t);
}

/*
 * strccat()
 * appends t to the end of s
 */
void strccat(char *s, char *t)
{
    while (*s++ !='\0') {
        ;
    }
    s--;
    while (*s++ = *t++) {
        ;
    }
    *s = '\0';
}

/*
 * strend(s,t)
 * returns 1 if the string t occurs at the end of string s
 * otherwise 0
 */
int strend(char *s, char *t)
{
    int i, j;

    for(i = 0; s[i] != '\0'; i++) {
        ;
    }
    i--;

    for(j = 0; t[j] != '\0'; j++) {
        ;
    }
    j--;

    for(; s[i] == t[j]; i--, j--) {
        if (i >= 0 && j == 0) {
            return (1);
        }
    }
    return (0);
}

void str_reverse(char *s, int l, int h)
{
    char temp;

    if (l < h) {
        str_reverse(s, l+1, h-1);
        temp = s[l];
        s[l] = s[h];
        s[h] = temp;
    }
}


void main()
{
    char s[10], t[10];
    int ret = 0, len = 0;
    printf("Enter the string\n");
    scanf("%s", t);
    //strcopy(s,t);
    //printf("Copied string is: %s\n", s);
    //printf("Enter string\n");
    //scanf("%s", s);
    //printf("%d\n", strcomp(s,t));
    //strccat(s,t);
    //printf("concatenated string: %s\n", s);
    //ret = strend(t,s);
    //printf("%d\n", ret);
    len = strlen(t);
    str_reverse(t, 0, len-1);
    printf("Reversed string: %s", t);
}
