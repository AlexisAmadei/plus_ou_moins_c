/*
** EPITECH PROJECT, 2021
** Projet Maker_bidouille
** File description:
** plus_or_minus
*/

#include "pom.h"

static void check_arg(const char nb_player)
{
    if (nb_player < '0' || nb_player > '2') {
        help();
        exit(84);
    }
}

static void get_player(pom_t *game, int num_player)
{
    char *buffer = NULL;
    size_t size;

    system("clear");
    my_putstr("Hey buddy what's your name ? ");
    getline(&buffer, &size, stdin);
    game->user1 = malloc(sizeof(char) * strlen(buffer));
    game->user1 = buffer;
    buffer = NULL;
    if (num_player == 2) {
        my_putstr("Hey buddy v2 what's your name ? ");
        getline(&buffer, &size, stdin);
        game->user2 = malloc(sizeof(char) * strlen(buffer));
        game->user2 = buffer;
        buffer = NULL;
    }
}

void set_rand(pom_t *game)
{
    srand(time(NULL));
    game->rand_nb = rand() % 101;
    if (game->rand_nb == 0) {
        set_rand(game);
        return;
    }
    my_putstr("So, AI chose a number between 1 and 100\n");
}

int plus_or_minus(char nb_player)
{
    pom_t *game = init_pom();
    size_t size;
    char *buffer = NULL;
    int num_player = nb_player - '0';
    bool loop = true;
    int guess = 0;
    int try = 0;

    check_arg(nb_player);
    get_player(game, num_player);
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
    my_putstr("Try used: ");
    my_put_nbr(try);
    my_putchar('\n');
    return 0;
}