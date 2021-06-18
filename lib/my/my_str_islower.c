/*
** EPITECH PROJECT, 2020
** is lower
** File description:
** is only lower
*/

int my_str_islower(char const *str)
{
    for (int i = 0; str[i]; i++)
        if (str[i] < 'a' || str[i] > 'z')
            return 0;
    return 1;
}
