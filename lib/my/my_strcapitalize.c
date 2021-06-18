/*
** EPITECH PROJECT, 2020
** capitalize
** File description:
** cap
*/

char *my_strcapitalize(char *str)
{
    for (int i = 0; str[i]; i++)
        if (i == 0 || (i > 0 && str [i - 1] == ' '))
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] -= 32;
    return str;

}
