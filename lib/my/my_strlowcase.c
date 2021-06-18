/*
** EPITECH PROJECT, 2020
** upcase
** File description:
** ups case
*/

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i]; i++)
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    return str;
}
