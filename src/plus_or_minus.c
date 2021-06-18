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
    int nb = 0;
    srand()
}

int plus_or_minus(char nb_player)
{
    pom_t *game = init_pom();
    int num_player = nb_player - '0';

    check_arg(nb_player);
    get_player(game, num_player);
    get_number(game);
    return 0;
}