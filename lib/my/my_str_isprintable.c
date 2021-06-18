/*
** EPITECH PROJECT, 2020
** is print
** File description:
** is only print
*/

int my_str_isprintable(char const *str)
{
    for (int i = 0; str[i]; i++)
        if (str[i] < 32)
            return 0;
    return 1;
}
