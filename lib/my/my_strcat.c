/*
** EPITECH PROJECT, 2020
** str cat
** File description:
** concatenatestwostrings
*/

#include "stdlib.h"
#include "my.h"

char *my_strcat(char *s1, char *s2)
{
    char *res = malloc(my_strlen(s1) + my_strlen(s2) + 1);
    int i = 0;

    for (; s1[i]; i++)
        res[i] = s1[i];
    for (int j = 0; s2[j]; i++, j++)
        res[i] = s2[j];
    res[i] = '\0';
    return res;
}
