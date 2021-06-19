/*
** EPITECH PROJECT, 2021
** Projet Maker_bidouille
** File description:
** proto
*/

#ifndef PROTO_H_
#define PROTO_H_

#include "struct.h"

//lib fcts
void my_putchar(char c);
void my_putstr(char *str);
int my_put_nbr(int nb);

//main.c
void help(void);
void check_arg(const char nb_player);


//pom.c
int one_player(oneplayer_t *game);
int two_player(twoplayer_t *game);

//init.c
oneplayer_t *init_pom(void);
void game(const char **argv);


//putnbr
int my_put_nbr(int nb);

//get_player.c
void get_player(oneplayer_t *game, int num_player);

#endif /* !PROTO_H_ */
