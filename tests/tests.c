#include "tests_minify.h"
#include "tests_split.h"
#include "tests_trim.h"

int main ()
{
    /* Minify */
    testMinifySimpleHtml();
    testMinifyHtmlWithSpace();
    testMinifyMultilineHtml();

    /* Trim */
    testTrimStringWithSpacesOnlyAtTheBeggining();
    testTrimStringWithSpacesAtEnd();

    /* Split */
    testSplitString();

    /* Count */
    testCountCharOnAString();
    return 0;
}
