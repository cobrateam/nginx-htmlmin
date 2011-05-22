#include <string.h>
#include <stdlib.h>

int countChar(const char *string, const char character)
{
    int i, counter = 0, length = strlen(string);
    for (i = 0; i < length; i++)
    {
        if (*(string + i) == character)
        {
            counter++;
        }
    }
    return counter;
}

char ** split(const char *string)
{
    int currentLineCounter = 0, linesCounter = 0, lineSize = 100;
    int stringLength = strlen(string);

    char ** output = (char **)malloc(countChar(string, '\n') * sizeof(char *));

    char *currentLine = (char *)malloc(lineSize * sizeof(char));
    int character = *string;
    *string++;

    while (character != 0)
    {
        if (character == '\n')
        {
            currentLine[currentLineCounter] = 0;
            int l = strlen(currentLine);
            if (l < lineSize)
            {
                currentLine = realloc(currentLine, l * sizeof(char));
            }

            *(output + linesCounter) = currentLine;
            linesCounter++;

            lineSize = 100;
            currentLine = (char *)malloc(lineSize * sizeof(char));
            currentLineCounter = 0;
        }
        else
        {
            *(currentLine + currentLineCounter) = character;
            currentLineCounter++;
        }

        if (currentLineCounter > (lineSize - 2))
        {
            lineSize += 50;
            currentLine = (char *)realloc(currentLine, lineSize * sizeof(char *));
        }

        character = *string;
        *string++;
    }

    return output;
}
