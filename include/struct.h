/*
** EPITECH PROJECT, 2021
** Projet Maker_bidouille
** File description:
** struct
*/

#ifndef STRUCT_H_
#define STRUCT_H_

typedef struct oneplayer_s
{
    char *user1;
    char *user2;
    int choosen_nb;
    int rand_nb;
}oneplayer_t;

typedef struct twoplayer_s
{
    char *user1;
    char *user2;
}twoplayer_t;

#endif /* !STRUCT_H_ */
