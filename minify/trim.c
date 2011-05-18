#include <ctype.h>
#include <string.h>
#include "trim.h"

char * trim(const char *inputString)
{
    register char *end;
    register int length;

    while (isspace(*inputString)) *inputString++;
    length = strlen(inputString);

    while (*inputString && length)
    {
        end = inputString + length - 1;
        if (isspace(*end))
            *end = '\0';
        else
            break;
        length = strlen(inputString);
    }

    return inputString;
}
