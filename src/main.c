/*
** EPITECH PROJECT, 2021
** Projet Maker_bidouille
** File description:
** main
*/

#include "pom.h"

void help(void)
{
    my_putstr("\n     ./USAGE:\n./plus_or_minus nb_player [1 or 2]\n");
    my_putstr("Remember to buy some milk.\n\n");
}

int main(int argc, char **argv)
{
    if (argc == 1 || argc > 2)
        help();
    if (argc == 2)
        plus_or_minus(argv[1][0]);
    return 0;
}