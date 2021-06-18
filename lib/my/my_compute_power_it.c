/*
** EPITECH PROJECT, 2020
** compute power it
** File description:
** power it
*/

int my_compute_power_it(int nb, int p)
{
    long res = 1;
    if (p < 0) return 0;
    for (int i = 0; i < p; i++) {
        if (res * nb > 2147483647)
            return 0;
        res *= nb;
    }
    return res;
}
