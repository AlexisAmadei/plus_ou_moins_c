/*
** EPITECH PROJECT, 2020
** strncmp
** File description:
** cmps to n
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    for (int i = 0; s1[i] && s2[i] && i < n; i++)
        if (s1[i] != s2[i])
            return 0;
    return 1;
}
