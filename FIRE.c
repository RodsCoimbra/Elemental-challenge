#include <stdio.h>
#include <stdlib.h>

void main()
{
    int tam, i, k = 1;
    char *s = NULL;
    scanf(" %d", &tam);
    if (tam <= 0)
    {
        return;
    }
    s = (char *)malloc(sizeof(char) * (tam + 1));
    scanf(" %s", s);
    for (i = 1; i != tam; i++, k = 1)
    {
        while (i - k >= 0 && s[i - k] == '0')
        {
            k += 2;
        }
        if (i - k < 0)
        {
            continue;
        }
        switch (s[i])
        {
        case 'F':
            if (s[i - k] == 'W')
            {
                s[i] = '0';
                s[i - k] = '0';
            }
            break;
        case 'E':
            if (s[i - k] == 'A')
            {
                s[i] = '0';
                s[i - k] = '0';
            }
            break;
        case 'W':
            if (s[i - k] == 'F')
            {
                s[i] = '0';
                s[i - k] = '0';
            }
            break;
        case 'A':
            if (s[i - k] == 'E')
            {
                s[i] = '0';
                s[i - k] = '0';
            }
            break;
        }
    }
    for (i = 0; i != tam; i++)
        if (s[i] != '0')
        {
            printf("%c", s[i]);
        }
    free(s);
    return;
}