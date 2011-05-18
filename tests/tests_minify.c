#include <assert.h>
#include <stdlib.h>
#include <string.h>

#include "tests_minify.h"
#include "../minify/minify.h"

void testMinifySimpleHtml()
{
    char *string = (char *)malloc(1000 * sizeof(char));
    strcpy(string, "          <p>Hello</p>");
    assert(strcmp(minify(string), "<p>Hello</p>") == 0);
}

void testMinifyHtmlWithSpace()
{
    char *string = (char *)malloc(1000 * sizeof(char));
    strcpy(string, "          <p>Hello world</p>");
    assert(strcmp(minify(string), "<p>Hello world</p>") == 0);
}
