/*
** EPITECH PROJECT, 2020
** is alpha
** File description:
** is only alpha
*/

int my_str_isalpha(char const *str)
{
    for (int i = 0; str[i]; i++)
        if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
            return 0;
    return 1;
}
