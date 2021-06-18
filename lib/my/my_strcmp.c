/*
** EPITECH PROJECT, 2020
** str cmp
** File description:
** cmp
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    for (; s1[i]; i++)
        if (s1[i] < s2[i])
            return 2;
        else if (s1[i] > s2[i])
            return 1;
    if (s1[i] == s2[i])
        return 0;
    if (s1[i] == '\0')
        return 2;
}
