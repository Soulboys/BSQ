/*
** EPITECH PROJECT, 2018
** include
** File description:
** create an include
*/

#ifndef MY_H_
#define MY_H_

void my_putchar(char c);
int my_putstr (char const *str);
char *my_revstr (char *str);
char *my_strcpy(char const *src);
int my_strlen2(char const *str, int i);
int my_strlen(char const *str);
int my_strcmp(char const *s1, char const *s2);
int my_getnbr(char const *str);
char *my_strdup(char const *src);
int leng_of_the_str(char *str);
int my_strlenspe(char *str);
int fs_open_file(char const *filepath);
int main(int argc, char **argv);
int my_strlen2(char const *str, int i);
int leng_of_max(char *str);
int nbrcolumn(char *str, int lengmax);
int main(int argc, char **argv);
void draw(char *str);
int test(char *str, int max, int i, int n);
char *strtostr(char *str, int max, int column, int lengmax);
char *add_x(int memory, int memory_i, char *str, int max);
char *algo(int nbr_column, int max, char *str);

#endif
