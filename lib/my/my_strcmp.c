/*
** EPITECH PROJECT, 2019
** my_lib
** File description:
** my_strcmp
*/

int my_strcmp(char *s1, char *s2)
{
    int i = 0;

    while ((s1[i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i])) {
        i++;
    }
    return (s1[i] - s2[i]);
}