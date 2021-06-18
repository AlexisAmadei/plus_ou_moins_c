/*
** EPITECH PROJECT, 2020
** puterr
** File description:
** puts error
*/

#include "my.h"
#include "unistd.h"

int my_strlen(char const *str);

void my_puterr(char *str)
{
    write(2, str, my_strlen(str));
}
