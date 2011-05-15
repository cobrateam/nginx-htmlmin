#include <assert.h>
#include <stdlib.h>
#include <string.h>

#include "../minify/minify.h"

void test_minifySimpleHtml()
{
    char *string = (char *)malloc(1000 * sizeof(char));
    strcpy(string, "          <p>Hello world</p>   ");
    assert(strcmp(minify(string), "<p>Hello world</p>") == 0);
}

int main ()
{
    test_minifySimpleHtml();
    return 0;
}
