/*
** EPITECH PROJECT, 2018
** CPE_BSQ_bootstrap_2018
** File description:
** bootstrap bsq
*/

#include "include/my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char *algo(int nbr_column, int max, char *str)
{
    int n = 1;
    int i = 0;
    int tkt = 0;
    int memory = 1;
    int memory_i = 0;

    for (; str[i]; i++) {
         if(str[i] == '.') {
            n = test(str, max, i, memory);
        }
        if (n != 0) {
            n++;
            memory++;
            memory_i = i;
            i--;
        }
    }
    add_x(memory - 1, memory_i, str, max);
}

char *strtostr(char *str, int max, int column, int lengmax)
{
    int i = lengmax;
    int j = 0;
    int a = max * column;
    char *strd = malloc(sizeof(char) * (max * column + column + 1));

    for (; str[i]; i++, j++) {
        strd[j] = str[i];
    }
    return (strd);
}

void draw(char *str)
{
    write(1, str, my_strlen(str));
}

int fs_open_file(char const *filepath)
{
    int max;
    int thecat;
    char *str;
    char *strf;
    int nbr_column;
    int lengmax;
    int size = 1;
    struct stat filest;

    stat(filepath, &filest);
    str = malloc(sizeof(char) * filest.st_size + 1);
    thecat = open(filepath, O_RDONLY);
    if (thecat == -1) {
        exit(84);
    }
    else {
        read(thecat, str, filest.st_size);
    }
    str[filest.st_size] = '\0';
    close(thecat);
    lengmax = leng_of_max(str);
    max = leng_of_the_str(str);
    nbr_column = nbrcolumn(str, lengmax);
    strf = strtostr(str, max, nbr_column, lengmax);
    algo(nbr_column, max, strf);
    draw(strf);
}

int main(int argc, char **argv)
{
    fs_open_file(argv[1]);
}
