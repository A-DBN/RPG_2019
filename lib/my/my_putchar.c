/*
** EPITECH PROJECT, 2019
** my_putchar
** File description:
** Print a char in the console standard output
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}