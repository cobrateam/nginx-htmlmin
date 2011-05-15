#include <ctype.h>
#include <stdlib.h>
#include <string.h>

char * minify(char *inputHtml)
{
    int i, count = 0;
    int length = strlen(inputHtml);
    char *minifiedHtml = (char *)malloc(length * sizeof(char));

    for (i = 0; i < length; i++)
    {
        if (!isspace(inputHtml[i])) {
            minifiedHtml[count] = inputHtml[i];
            count++;
        }
    }
    minifiedHtml[count] = '\0';

    return minifiedHtml;
}
