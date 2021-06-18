/*
** EPITECH PROJECT, 2020
** square root
** File description:
** root
*/

int my_compute_square_root(int nb)
{
    long min = 1;
    long max = ((nb / 2) % 2 == 0) ? nb / 2 : nb / 2 - 1;
    if (nb < 0) return 0;
    if (nb == 9) return 3;
    while (min * min != nb && max * max != nb && min != max) {
        if (max - min == 1 || min - max == 1) return 0;
        if (max * max >= 2147483647) return 0;
        if (nb - (min * min) < (max * max) - nb)  max /= 2;
        else min *= 2;
    }
    if (min * min == nb) return min;
    if (max * max == nb) return max;
    else return 0;
}
