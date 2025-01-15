#include <stdio.h>
#include <string.h>

int main()
{
    char text[100];
    scanf("%s", text);

    int halfLength = strlen(text) / 2;

    if (strlen(text) % 2 == 0)
    {
        for (int i = halfLength - 1; i >= 0; i--)
        {
            printf("%c", text[i]);
        }

        for (int j = strlen(text) - 1; j >= halfLength; j--)
        {
            printf("%c", text[j]);
        }
    }
    else
    {
        for (int i = halfLength - 1; i >= 0; i--)
        {
            printf("%c", text[i]);
        }

        for (int j = strlen(text) - 1; j > halfLength; j--)
        {
            printf("%c", text[j]);
        }
    }
}