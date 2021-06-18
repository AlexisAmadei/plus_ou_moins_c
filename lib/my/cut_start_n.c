/*
** EPITECH PROJECT, 2020
** cut start n
** File description:
** cuts n characters at the start
*/

#include "stdlib.h"
#include "my.h"

char *cut_start_n(char *str, int n, int freeable)
{
    char *res = malloc(my_strlen(str) - n + 1);
    int i = 0;

    for (; str[i + n]; i++)
        res[i] = str[i + n];
    res[i] = '\0';
    if (freeable == 1)
        free(str);
    return res;
}
