#include <ctype.h>
#include <string.h>
#include "trim.h"

char * trim(const char *inputString)
{
    while (isspace(*inputString)) *inputString++;
    return inputString;
}
