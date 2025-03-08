/*
 * Program is to reverse a given set of words
 * in that order. This is more like reversing
 * a complete book
 * eg:- "Happy New Year" will be reversed as
 * "Year New Happy"
 */

#include <stdio.h>
#include <stdlib.h>

void reverse(char *st, char *end)
{
    char ch;
    while (st < end) {
        ch = *st;
        *st++ = *end;
        *end-- = ch;
    }
}

void
reverse_word(char *s)
{
    char *word = s;
    char *temp = s;
    
    while (*temp) {
        temp++;
        if(*temp == '\0' || *temp == ' ') {
            reverse(word, temp-1);
            word = temp + 1;
        }
    }

    reverse(s, temp-1);
}

int
main()
{
    char s[] = "happy new year";

    printf("before reverse is: %s\n",s);
    reverse_word(s);
    printf("Word after reverse is: %s\n",s);
}

