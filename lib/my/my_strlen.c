/*
** EPITECH PROJECT, 2020
** my str len
** File description:
** get string length
*/

int my_strlen(char const *str)
{
    int i = 0;
    for (; str[i]; i++);
    return (i);
}
