/*
** EPITECH PROJECT, 2020
** show str
** File description:
** shows hidden chars
*/

#include "my.h"

int my_showstr(char const *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] < 16) {
            my_putchar('\\');
            my_putnbr_base(str[i], "0123456789abcdef");
        }
        else
            my_putchar(str[i]);
    }
    return 0;
}
