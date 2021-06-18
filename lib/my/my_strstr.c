/*
** EPITECH PROJECT, 2020
** my strstr
** File description:
** strstr's
*/

#include "stddef.h"

char *my_strstr(char *str, char const *to_find)
{
    int j = 0;
    for (int i = 0; str[i] && to_find[j]; i++) {
        if (str[i] == to_find[j]) {
            if (to_find[j + 1] == '\0')
                return &str[i - j];
            else
                j++;
        }
        else {
            j = 0;
            if (str[i] == to_find[j]) {
                if (to_find[j + 1] == '\0')
                    return &str[i - j];
                else
                    j++;
            }
        }
    }
    return NULL;
}
