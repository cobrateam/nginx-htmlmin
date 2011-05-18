#include "tests_minify.h"
#include "tests_trim.h"

int main ()
{
    testMinifySimpleHtml();
    testMinifyHtmlWithSpace();

    testTrimStringWithSpacesOnlyAtTheBeggining();
    return 0;
}
