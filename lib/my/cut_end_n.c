/*
** EPITECH PROJECT, 2020
** cut end n
** File description:
** cuts n characters at the end
*/

#include "stdlib.h"
#include "my.h"

char *cut_end_n(char *str, int nb)
{
    int len = my_strlen(str);
    char *res = malloc(len - nb + 1);

    for (int i = 0; str[i] && i < len - nb; i++)
        res[i] = str[i];
    res[len - nb] = '\0';
    return res;
}
