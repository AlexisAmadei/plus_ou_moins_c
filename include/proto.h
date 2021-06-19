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

//pom.c
int plus_or_minus(char nb_player);

//init.c
pom_t *init_pom(void);

//putnbr
int my_put_nbr(int nb);

#endif /* !PROTO_H_ */
