/*
** EPITECH PROJECT, 2020
** my put nbr base
** File description:
** puts nbr in that base
*/

#include "my.h"

int rec(int nbr, char const *base)
{
    int basenb = my_strlen(base);

    if (nbr > 0) {
        rec(nbr / basenb, base);
        my_putchar(base[nbr % basenb]);
    }
}

int my_putnbr_base(int nbr, char const *base)
{
    if (nbr == 0)
        my_putchar('0');
    if (nbr < 0) {
        my_putchar('-');
        nbr *= -1;
    }
    rec(nbr, base);
}
