/*
** EPITECH PROJECT, 2021
** plus_ou_moins
** File description:
** get_player
*/

#include "pom.h"

void get_player(pom_t *game, int num_player)
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
