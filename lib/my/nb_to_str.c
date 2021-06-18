/*
** EPITECH PROJECT, 2020
** nb to str
** File description:
** nb to str
*/

#include "my.h"
#include "stdlib.h"

char *nb_to_str(int nb)
{
    int len = my_intlen(nb);
    char *res = malloc(len + 1);

    if (nb == 0)
        res[0] = '0';
    if (nb < 0) {
        res[0] = '-';
        nb *= -1;
    }
    for (int i = len - 1; nb > 0; i--) {
        res[i] = (nb % 10) + '0';
        nb /= 10;
    }
    res[len] = '\0';
    return res;
}
