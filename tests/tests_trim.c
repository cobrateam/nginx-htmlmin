#include <assert.h>
#include <stdlib.h>
#include <string.h>

#include "tests_trim.h"
#include "../minify/trim.h"

void testTrimStringWithSpacesOnlyAtTheBeggining()
{
    char *inputString = (char *)malloc(100 * sizeof(char));
    strcpy(inputString, "      hello world!");
    assert(strcmp(trim(inputString), "hello world!") == 0);
}

void testTrimStringWithSpacesAtEnd()
{
    char *inputString = (char *)malloc(100 * sizeof(char));
    strcpy(inputString, "hello world!     ");
    assert(strcmp(trim(inputString), "hello world!") == 0);
}
