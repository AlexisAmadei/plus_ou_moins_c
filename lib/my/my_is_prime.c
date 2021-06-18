/*
** EPITECH PROJECT, 2020
** is prime
** File description:
** is nb prime
*/

int my_is_prime(int nb)
{
    if (nb <= 1)
        return 0;
    if (nb == 2)
        return 1;
    if (nb % 2 == 0)
        return 0;
    int divide = nb - 2;
    for (; divide != 1; divide -= 2)
        if (nb % divide == 0)
            return 0;
    return 1;
}
