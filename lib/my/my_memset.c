/*
** EPITECH PROJECT, 2019
** my_lib
** File description:
** my_memset
*/

void my_memset(char *s, int c, int n)
{
    for (int i = 0; i < n; i++) {
        s[i] = c;
    }
}