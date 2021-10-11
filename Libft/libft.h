#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int ft_atoi (const char *str);

void ft_bzero(void *str, size_t n);

int ft_isalnum(int arg);

int ft_isalpha(int arg);

int ft_isascii(int arg);

int ft_isdigit(int arg);

int ft_isprint(int arg);

void *ft_memcpy(void *dest, const void *src, size_t count);

void *ft_memccpy(void *dest, const void *src, int c, size_t count);

void *ft_memchr(const void *str, int c, size_t counter);

int ft_memcmp(const void *s1, const void *s2, size_t counter);

void *ft_memcpy(void *dest, const void *src, size_t count);

void *ft_memmove(void *dest, const void *src, size_t counter);

void *ft_memset(void *str, int c, size_t count);

char *ft_strcat(char *dest, const char *src);

char *ft_strncat(char *dest, const char *src, size_t n);

size_t	ft_strlcat(char *dest, const char *src, size_t n);

char *ft_strchr(const char *str, int c);

int ft_strcmp(const char *s1, const char *s2);

int ft_strncmp(const char *s1, const char *s2, size_t n);

char *ft_strcpy(char *dest, const char *src);

char *ft_strncpy(char *dest, const char *src, size_t n);

char *strdup(const char *str);

size_t ft_strlen(const char *str);

char	*ft_strstr(char *haystack, char *needle);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

char	*ft_strrchr(const char *str, int c);

int ft_tolower(int arg);

int ft_toupper(int arg);

void    ft_putchar(char c);

void    ft_putchar_fd(char c, int fd);

void    ft_putstr(char const *str);

void    ft_putstr_fd(char const *str, int fd);

void    ft_putendl(char const *str);

void    ft_putendl_fd(char const *str, int fd);

void    ft_putnbr(int n);

void    ft_putnbr_fd(int n, int fd);

void    *ft_memalloc(size_t size);

void    ft_memdel(void **ap);

char    *ft_strnew(size_t size);

void    ft_strdel(char **as);

void    ft_strclr(char *s);

void    ft_striter(char *s, void (*f)(char *));

void	ft_striteri(char *s, void (*f)(unsigned int, char *s));

char    *ft_strmap(char const *s, char (*f)(char));

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));


#endif