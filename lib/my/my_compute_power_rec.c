/*
** EPITECH PROJECT, 2020
** power rec
** File description:
** power rec
*/

int my_compute_power_rec(int nb, int p)
{
    long n = nb;
    if (p == 0)
        return 1;
    if (p < 0)
        return 0;
    if (p > 1) {
        if (n * n > 2147483647)
            return 0;
        nb *= my_compute_power_rec(nb, p - 1);
    }
    return nb;
}
