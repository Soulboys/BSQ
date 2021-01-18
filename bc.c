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

int my_strlenspe(char *str)
{
    int i = 0;
    for (; str[i] != '\n'; i++);
    return (i);
}
