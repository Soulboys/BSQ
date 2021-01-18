/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** __DESCRIPTION__
*/

#include "include/my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int leng_of_the_str(char *str)
{
    int leng = my_strlenspe(str);
    int max = 0;
    char line[leng + 1];

    for (int i = 0; i != leng; i++) {
        line[i] = str[i];
    }
    line[leng] = '\0';
    max = my_getnbr(line);
    return (max);
}

int leng_of_max(char *str)
{
    int leng = my_strlenspe(str);
    int max = 0;
    int lengmax;
    char line[leng + 1];

    for (int i = 0; i != leng; i++) {
        line[i] = str[i];
    }
    line[leng] = '\0';
    lengmax = my_strlen(line);
    return (lengmax + 1);
}

int nbrcolumn(char *str, int lengmax)
{
    int lengcolumn = 0;
    lengcolumn = my_strlen2(str, lengmax);
    return (lengcolumn);

}

char *add_x(int memory, int memory_i, char *str, int max)
{
    int x = 0;
    int y = 0;
    int tmp = memory_i;

    for (; x < memory; x++, tmp = tmp + max + 1) {
        for (; y < memory; y++, tmp++)
        str[tmp] = 'x';
        y = 0;
        tmp = tmp - memory;
    }
}

int test(char *str, int max, int i, int n)
{
    int tmp_i = i;
    int tmp1 = 0;
    int tmp2 = 1;

    for (; tmp1 < n; tmp1++, tmp_i++)
        if (str[tmp_i] != '.')
            return (0);
    tmp_i = i + max + 1;
    for (;tmp2 < n; tmp2++, tmp_i = (max + tmp_i + 1))
        if (str[tmp_i] != '.')
            return (0);
    tmp_i = i + max + 2;
    tmp2 = 1;
    for (; tmp2 < n; tmp2++, tmp_i = max + tmp_i + 1) {
        tmp1 = 1;
        for(; tmp1 < n; tmp_i++, tmp1++)
            if (str[tmp_i] != '.')
                return (0);
        tmp_i = tmp_i - tmp1 + 1;
    }
    return (n);
}
