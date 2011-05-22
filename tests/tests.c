#include "tests_minify.h"
#include "tests_trim.h"

int main ()
{
    testMinifySimpleHtml();
    testMinifyHtmlWithSpace();
    testMinifyMultilineHtml();

    testTrimStringWithSpacesOnlyAtTheBeggining();
    testTrimStringWithSpacesAtEnd();
    return 0;
}
