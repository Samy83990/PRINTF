/*
** EPITECH PROJECT, 2023
** am
** File description:
** am
*/

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "../include/my.h"

char *binaire(int nb)
{
    int i = 0, p, res;
    char *titi = malloc(50);
    char temp;

    while (nb != 0) {
        res = nb % 2;
        if (res < 10) {
            titi[i] = res + '0';
        } else {
            titi[i] = res - 10 + 'a';
        }
        i++;
        nb = nb / 2;
    }
    for (p = 0; p < i / 2; p++) {
        temp = titi[p];
        titi[p] = titi[i - p - 1];
        titi[i - p - 1] = temp;
    }
    return titi;
}
