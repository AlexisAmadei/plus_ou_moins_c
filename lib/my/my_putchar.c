/*
** EPITECH PROJECT, 2020
** my_put_char
** File description:
** puts character
*/

#include "unistd.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
