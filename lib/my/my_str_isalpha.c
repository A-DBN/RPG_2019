/*
** EPITECH PROJECT, 2019
** my_lib
** File description:
** my_str_isalpha
*/

int my_str_isalpha(char const *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] <= 64)
            return (0);
        if (str[i] >= 91 && str[i] <= 96)
            return (0);
        if (str[i] >= 123)
            return (0);
    }
    return (1);
}