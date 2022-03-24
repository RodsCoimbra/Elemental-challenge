#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    srand(time(NULL));
    int k, i, l;
    FILE *f;
    f = fopen("Teste.txt", "w");
    scanf("%d", &l);
    fprintf(f, "%d", l);
    for (i = 1; i <= l; i++)
    {
        k = rand() % 4;
        switch (k)
        {
        case 0:
            fprintf(f, "F");

            break;
        case 1:
            fprintf(f, "E");

            break;
        case 2:
            fprintf(f, "A");

            break;
        case 3:
            fprintf(f, "W");
            break;
        default:
            break;
        }
    }
}