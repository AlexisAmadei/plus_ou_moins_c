/*
** EPITECH PROJECT, 2020
** strdup
** File description:
** duplicates
*/

#include "stdlib.h"

int my_strlen(char *str);

char *my_strdup(char *str)
{
    int i = 0;
    char *res = malloc(my_strlen(str) + 1);
    for (; str[i]; i++)
        res[i] = str[i];
    res[i] = '\0';
    return res;
}
