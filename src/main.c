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

void check_arg(const char nb_player)
{
    if (nb_player < '0' || nb_player > '2') {
        help();
        exit(84);
    }
    if (nb_player == 1)
        return 1;
    if (nb_player == 2)
        return 2;
}

int main(int argc, char **argv)
{
    if (argc == 1 || argc > 2)
        help();
    game(argv[1][0]);
    return 0;
}