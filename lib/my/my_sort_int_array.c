/*
** EPITECH PROJECT, 2020
** sort int
** File description:
** sorts ints
*/

void my_sort_int_array(int *array, int size)
{
    int tmp;
    int swap = 1;
    while (swap == 1) {
        swap = 0;
        for (int i = 0; i < size - 1; i++) {
            if (array[i] > array[i + 1]) {
                tmp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = tmp;
                swap = 1;
            }
        }
    }
}
