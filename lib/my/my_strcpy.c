/*
** EPITECH PROJECT, 2020
** str cpy
** File description:
** copy str
*/

char *my_strcpy(char *dest, char *src)
{
    int i = 0;
    for (; src[i]; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}
