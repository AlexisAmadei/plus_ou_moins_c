/*
** EPITECH PROJECT, 2020
** my str to word array
** File description:
** str to words
*/

#include "stdlib.h"

int my_isalphanum(char c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    if (c >= 'A' && c <= 'Z')
        return 1;
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}

int count_words(char const *str)
{
    int res = 0;

    for (int i = 0; str[i]; i++)
        if (str[i + 1] && my_isalphanum(str[i]) == 0
            && my_isalphanum(str[i + 1]) == 1) {
            res++;
        }
    return res + 1;
}

int count_to_next_space(char const *str, int index)
{
    int res = 0;
    for (int i = index; str[i] && my_isalphanum(str[i]) == 1; i++, res++);
    return res;
}

char **my_str_to_word_array(char const *str)
{
    int windex = 0;
    char **tab = malloc(sizeof(char *) * (count_words(str) + 1));
    int word_size;
    int j = 0;

    for (int i = 0; str[i]; i++, windex++) {
        for (; my_isalphanum(str[i]) == 0; i++);
        word_size = count_to_next_space(str, i);
        tab[windex] = malloc(word_size + 1);
        for (j = 0; j < word_size; j++, i++)
            tab[windex][j] = str[i];
        tab[windex][j] = '\0';
        if (str[i] == '\0')
            break;
    }
    tab[windex + 1] = NULL;
    return tab;
}
