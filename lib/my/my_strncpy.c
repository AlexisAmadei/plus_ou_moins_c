/*
** EPITECH PROJECT, 2020
** my_strncpy
** File description:
** copies to n
*/

int my_strlen(char const *str);

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    for (; src[i] && i < n; i++)
        dest[i] = src[i];
    if (n > my_strlen(src))
        dest[i] = '\0';
    return dest;
}
