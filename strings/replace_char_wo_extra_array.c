
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void replace_pattern(char *s, int *c, char *out)
{
    //double quote ""replaced with /"

    int len, i = 0;
    int j = 0;

    while (s[i++] != '\0');

    i = i-1;

   j = (i*2) + 1;

   while (i >= 0) {
       if (s[i] == '"') {
           out[j--] = '"';
           out[j--] = '/';
           *c = *c + 1;
       } else {
           out[j--] = s[i];
       }
       i--;
   }

}

int main()
{
    char *s = (char *) malloc (sizeof(char) * 30);
    fgets(s, 30, stdin);
    int len = strlen(s);
    char *out = NULL;
    int c = 0;
    out = (char *) (realloc(s, sizeof(char) * len*2));
    if (out == NULL) {
        printf("memory allocation error\n");
    }
    replace_pattern(s, &c, out);
    out = out + len - c + 1;
    printf("output string: %s count: %d\n", out, c);
    return 0;
}
