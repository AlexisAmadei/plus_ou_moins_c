/*
** EPITECH PROJECT, 2020
** my put str
** File description:
** puts string
*/

void my_putchar(char c);

int my_putstr(char const *str)
{
    for (int i = 0; str[i]; i++)
        my_putchar(str[i]);
    return (0);
}
