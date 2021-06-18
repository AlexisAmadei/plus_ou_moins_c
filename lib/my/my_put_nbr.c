/*
** EPITECH PROJECT, 2020
** my_put_nbr
** File description:
** prints nbr
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    long print = nb;
    if (print == 0) {
        my_putchar('0');
        return (0);
    }
    if (print < 0) {
        my_putchar('-');
        print *= -1;
    }
    while (print > 0) {
        long tmp = print;
        int i = 1;
        int j = 0;
        for (; tmp >= 10; i *= 10, j++) tmp /= 10;
        my_putchar(tmp + '0');
        if (print == tmp * i && print >= 10)
            for (; j > 0; j--) my_putchar('0');
        print -= tmp * i;
    }
    return (0);
}
