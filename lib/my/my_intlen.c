/*
** EPITECH PROJECT, 2020
** int len
** File description:
** len of int
*/

int my_intlen(int nb)
{
    int res = 0;

    if (nb == 0)
        return 1;
    if (nb < 0) {
        res += 1;
        nb *= -1;
    }
    for (; nb > 0; res += 1)
        nb /= 10;
    return res;
}
