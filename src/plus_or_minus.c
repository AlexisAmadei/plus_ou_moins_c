/*
** EPITECH PROJECT, 2021
** Projet Maker_bidouille
** File description:
** plus_or_minus
*/

#include "pom.h"

void set_rand(oneplayer_t *game)
{
    srand(time(NULL));
    game->rand_nb = rand() % 101;
    if (game->rand_nb == 0) {
        set_rand(game);
        return;
    }
    my_putstr("So, AI chose a number between 1 and 100\n");
}

int one_player(oneplayer_t *game)
{
    size_t size;
    char *buffer = NULL;
    bool loop = true;
    int guess = 0;
    int try = 0;

    set_rand(game);
    my_putstr("Try to guess it now !\n");
    for (; loop == true; ++try) {
        my_putstr("= ");
        getline(&buffer, &size, stdin);
        guess = atoi(buffer);
        if (guess < game->rand_nb)
            my_putstr("You are under\n");
        if (guess > game->rand_nb)
            my_putstr("You are above\n");
        if (guess == game->rand_nb) {
            my_putstr("You won congrats !!\n");
            loop = false;
        }
    }
    free(buffer);
    my_putstr("Try used: ");
    my_put_nbr(try);
    my_putchar('\n');
    return 0;
}

int two_player(twoplayer_t *game)
{
    get_player(game, num_player);
}
