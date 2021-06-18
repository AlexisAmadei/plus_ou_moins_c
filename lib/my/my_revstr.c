/*
** EPITECH PROJECT, 2020
** rev str
** File description:
** reverse
*/

char *my_revstr(char *str)
{
    int len = 0;
    char c;

    for (; str[len]; len++);
    for (int i = 0; i < len / 2; i++) {
        c = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = c;
    }
    return str;
}
