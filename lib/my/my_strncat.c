/*
** EPITECH PROJECT, 2020
** strn cat
** File description:
** concatenatestwostrings
*/

#include "../../include/my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int len = my_strlen(dest);
    int i = 0;
    for (; src[i] && i < nb; i++)
        dest[i + len] = src[i];
    dest[i + len] = '\0';
    return dest;
}
