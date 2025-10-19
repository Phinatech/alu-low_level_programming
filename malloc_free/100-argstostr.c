#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: The argument count.
 * @av: The argument vector.
 * Return: A pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
    int i, j, k = 0, len = 0;
    char *str;

    if (ac == 0 || av == NULL)
        return (NULL);

    /* Calculate total length manually (without strlen) */
    for (i = 0; i < ac; i++)
    {
        j = 0;
        while (av[i][j] != '\0')
        {
            len++;
            j++;
        }
        len++; /* for newline */
    }

    str = malloc(sizeof(char) * (len + 1)); /* +1 for null terminator */
    if (str == NULL)
        return (NULL);

    /* Copy each argument into the new string */
    for (i = 0; i < ac; i++)
    {
        j = 0;
        while (av[i][j] != '\0')
        {
            str[k++] = av[i][j];
            j++;
        }
        str[k++] = '\n';
    }

    str[k] = '\0';
    return (str);
}

