/*
** EPITECH PROJECT, 2019
** my_lib
** File description:
** my_is_number
*/

int my_is_number(char letter)
{
    if (letter >= '0' && letter <= '9')
        return (0);
    else
        return (1);
}