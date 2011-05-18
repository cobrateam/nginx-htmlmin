#include <assert.h>
#include <stdlib.h>
#include <string.h>

#include "tests_trim.h"
#include "../minify/trim.h"

void testTrimStringWithSpacesOnlyAtTheBeggining()
{
    char *inputString = (char *)malloc(100 * sizeof(char));
    strcpy(inputString, "      oi chico!");
    assert(strcmp(trim(inputString), "oi chico!") == 0);
}
