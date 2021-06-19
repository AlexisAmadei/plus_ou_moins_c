/*
** EPITECH PROJECT, 2021
** Projet Maker_bidouille
** File description:
** init
*/

#include "pom.h"

pom_t *init_pom(void)
{
    pom_t *game = malloc(sizeof(pom_t));

    game->user1 = NULL;
    game->user2 = NULL;
    game->choosen_nb = 0;
    game->rand_nb = 0;
    return game;
}