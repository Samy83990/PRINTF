/*
** EPITECH PROJECT, 2023
** B-CPE-101-MAR-1-1-myprintf-samy.chakrouni
** File description:
** my_put_nbr
*/

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "../include/my.h"

int my_put_nbr(int nb)
{
    if (nb < 0) {
        write(1, "-", 1);
        nb = nb * -1;
        my_putchar(nb + '0');
    } else if (nb > 9) {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    } else {
        my_putchar(nb + '0');
    }
    return 0;
}
