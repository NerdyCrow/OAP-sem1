
#include <stdio.h>
#include <iostream>
void main()
{
    setlocale(LC_CTYPE, "rus");
    char s[357];
    int i, j, n;
    printf("¬ведите строку: ");
    gets_s(s);
    n = 0;
    for (i = 0; s[i] != 0; i++)
    {
        if (s[i] == ' ') {
            n++;
            printf("%c", s[i]);
            if (n % 2 != 0)
            {
                for (j = i + 1; s[j] != ' '; j++);
                i = j; n++;
            }
        }

        else
            printf("%c", s[i]);

    }
    printf("\n");
}