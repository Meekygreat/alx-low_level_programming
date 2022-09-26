#ifndef MAIN_H
#define MAIN_H

/**

 * void prototypes()
 * int prototypes()
 */

int _putchar(char);
char *_memset(char *s, char b, unisgned int n);
char *_memcpy(char *dest, char *src, unisigned int n);
char *_strchr(char *s, char c);
unisigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char $haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagmus(int *a, int size);
void set_string(char **s, char *to);

#endif /*MAIN_H*/
