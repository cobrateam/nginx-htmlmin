#include <assert.h>
#include <stdlib.h>
#include <string.h>

#include "tests_split.h"
#include "../minify/split.h"

int areStringArraysEqual(char **array1, char **array2, int length)
{
    int i, j;
    for (i = 0; i < length; i++)
    {
        char *string1 = *(array1 + i);
        char *string2 = *(array2 + i);
        int stringLength = strlen(string1);
        for (j = 0; j < stringLength; j++)
        {
            if (*(string1 + j) != *(string2 + j))
            {
                return 0;
            }
        }
    }

    return 1;
}

void testCountCharOnAString()
{
    char *string = (char *)malloc(10 * sizeof(char));
    strcpy(string, "sweet home");
    assert(3 == countChar(string, 'e'));
    assert(1 == countChar(string, 'w'));
}

void testSplitString()
{
    char *input = (char *)malloc(100 * sizeof(char));
    strcpy(input, "First line\nSecond line\nThird line");

    char **expected = (char **)malloc(3 * sizeof(char *));
    *(expected+0) = (char *)malloc(11 * sizeof(char));
    *(expected+1) = (char *)malloc(12 * sizeof(char));
    *(expected+2) = (char *)malloc(11 * sizeof(char));

    strcpy(*(expected+0), "First line");
    strcpy(*(expected+1), "Second line");
    strcpy(*(expected+2), "Third line");

    assert(areStringArraysEqual(expected, split(input), 3));
    free(input);

    int i;
    for (i = 0; i < 3; i++)
    {
        free(*(expected + i));
    }
    free(*expected);
}
