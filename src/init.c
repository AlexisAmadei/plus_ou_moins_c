/*
** EPITECH PROJECT, 2021
** Projet Maker_bidouille
** File description:
** init
*/

#include "pom.h"

oneplayer_t *init_one(void)
{
    oneplayer_t *one = malloc(sizeof(oneplayer_t));

    one->user1 = NULL;
    one->user2 = NULL;
    one->choosen_nb = 0;
    one->rand_nb = 0;
    return one;
}

twoplayer_t *init_two(void)
{
    twoplayer_t *two = malloc(sizeof(twoplayer_t));

    two->user1 = NULL;
    two->user2 = NULL;
    return two;
}

void game(const char **argv)
{
    oneplayer_t *one = init_one();
    twoplayer_t *two = init_two();

    if (check_arg(argv[1][0]) == 1)
        one_player(one);
    if (check_arg(argv[1][0]) == 2)
        two_player(two)
}