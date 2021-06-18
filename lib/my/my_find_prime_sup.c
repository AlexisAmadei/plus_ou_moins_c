/*
** EPITECH PROJECT, 2020
** prime sup
** File description:
** find prime superior
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    int start = 0;
    if (nb <= 3)
        return 3;
    for (int i = 0; start - 1 < nb; i++)
            start = 6 * i;
    while (my_is_prime(start - 1) == 0 && my_is_prime(start + 1) == 0)
        start += 6;
    if (my_is_prime(start - 1) == 1) return start - 1;
    if (my_is_prime(start + 1) == 1) return start + 1;
}
