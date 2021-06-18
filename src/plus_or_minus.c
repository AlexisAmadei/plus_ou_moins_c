/*
** EPITECH PROJECT, 2021
** Projet Maker_bidouille
** File description:
** plus_or_minus
*/

#include "pom.h"

pom_t *init_pom(void)
{
    pom_t *game = malloc(sizeof(pom_t));

    game->user1 = NULL;
    game->user2 = NULL;
    game->choosen_nb = 0;
    return game;
}

static void check_arg(const char nb_player)
{
    if (nb_player < '0' || nb_player > '2') {
        help();
        exit(84);
    }
}

int plus_or_minus(char nb_player)
{
    pom_t *game = init_pom();
    size_t size;
    char *buffer = NULL;

    check_arg(nb_player);
    my_putstr("Hey buddy what's your name ? ");
    getline(&buffer, &size, stdin);
    game->user1 = malloc(sizeof(char) * strlen(buffer));
    game->user1 = buffer;
    printf("%s", game->user1);
    return 0;
}