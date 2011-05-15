#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../minify/minify.h"

void test_minifySimpleHtml()
{
    char *string = (char *)malloc(1000 * sizeof(char));
    strcpy(string, "          <p>Hello</p>");
    assert(strcmp(minify(string), "<p>Hello</p>") == 0);
}

int main ()
{
    test_minifySimpleHtml();
    return 0;
}
