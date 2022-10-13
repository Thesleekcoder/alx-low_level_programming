#include <stdio.h>
#include <stdlib.h>
#include <main.h>

/**
 * word_count - function counts amount of words
 * seperated by space
 * @s: string to check
 *
 * Return: number of words
 */
int word_count(char *s)
{
        int c = 0, i = 0;

        while (s[i])
        {
                if (s[i] != ' ')
                {
                        c++;
                        while (s[i] && s[i] != ' ')
                                i++;
                }
                else
                        i++;
        }
        return (c);
}

/**
 * strtow - function splits a string into words
 * @str: string to split up
 *
 * Return: a pointer to an array of strings
 */
char **strtow(char *str)
{
        char **a, *tmpP;
char i = 0, j = 0, pos = 0, size = 0, words = 0, tmp;

        if (str == NULL || *str == '\0')
                return (NULL);
        words = word_count(str);
        if (words == 0)
                return (NULL);
        a = (char **)malloc(sizeof(char *) * (words + 1));
        if (!a)
                return (NULL);
        j = 0;
        for (i = 0; i < words; i++)
-- INSERT --                                                                                                                                                                  43,1           4%

