#include <assert.h>
#include <stdlib.h>
#include <string.h>

#include "../minify/minify.h"

void test_minifyNiceHtml()
{
    char *string = (char *)malloc(1000 * sizeof(char));
    strcpy(string, "\
                <html>\
                    <head>\
                        <title>Hello world</title>\
                    </head>\
                    <body>\
                        Hello world.\
                    </body>\
                </html>");
    assert(strcmp(minify(string), "<html><head><title>Hello world</title></head><body>Hello world.</body></html>") == 0);
}

int main ()
{
    test_minifyNiceHtml();
    return 0;
}
