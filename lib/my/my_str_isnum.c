/*
** EPITECH PROJECT, 2019
** my_lib
** File description:
** my_str_isnum
*/

int my_str_isnum(char const *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] <= 47 || str[i] >= 58)
            return (0);
    }
    return (1);
}