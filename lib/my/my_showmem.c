/*
** EPITECH PROJECT, 2020
** show mem7
** File description:
** shows mem
*/

#include "my.h"

int my_showmem(char const *str, int size)
{
    int tmp = 0;
    for (int i = 0; i < size / 16; i++) {
        tmp = (int)&str[i * 16];
        my_putnbr_base(tmp, "0123456789abcdef");
        my_putchar(':');
        my_putchar(' ');
        for (int j = 0; j < 16; j++) {
            if (str[j + i * 16] < 16)
                my_putchar('0');
            my_putnbr_base(str[j + i * 16], "0123456789abcdef");
            if (j % 2 == 1)
                my_putchar(' ');
        }
        for (int j = 0; j < 16; j++) {
            if (str[j + i * 16] < 16) my_putchar('.');
            else my_putchar(str[j + i * 16]);
        }
        my_putchar('\n');
    }
}
