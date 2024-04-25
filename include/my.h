/*
** EPITECH PROJECT, 2023
** B-CPE-101-MAR-1-1-myprintf-samy.chakrouni
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_

    #include <stdio.h>
    #include <fcntl.h>
    #include <unistd.h>

int my_putstr( char const *str);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_strlen(char *str);
int my_getnbr(char const *str);
char *hexadecimal(int nb);
char *octet(int nb);
char *binaire(int nb);
int my_printf5(const char *format, int i, va_list args);
int my_printf4( const char *format, int i, va_list args);
int numberof(char const *str);
int my_float(double nb);
char *ptr(long format);
char *hexadecimal2(int nb);
int my_printf8(const char *format, int i, va_list args);
int unsigne(unsigned int nb);

#endif /* !MY_H_ */
