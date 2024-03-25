/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-krui <mde-krui@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/02 14:31:20 by mde-krui      #+#    #+#                 */
/*   Updated: 2024/03/25 15:32:25 by mde-krui      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdarg.h>
# include <stdbool.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int					ft_abs(int n);

int					ft_atoi(const char *n);
long				ft_atol(const char *n);
char				*ft_itoa(int n);
char				*ft_uitoa(unsigned int n);
char				ft_digittoc(int digit);
char				*ft_ptox(const void *p);
char				*ft_uitox(unsigned int n, int base);

int					ft_digitlen(int n, int base);

int					ft_tolower(int c);
int					ft_toupper(int c);

bool				ft_isupper(int c);
bool				ft_isprint(int c);
bool				ft_islower(int c);
bool				ft_isgraph(int c);
bool				ft_isdigit(int c);
bool				ft_iscntrl(int c);
bool				ft_isblank(int c);
bool				ft_isascii(int c);
bool				ft_isalpha(int c);
bool				ft_isalnum(int c);
bool				ft_isspace(int c);
bool				ft_isxdigit(int c);

void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memset(void *s, int c, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);

void				*ft_calloc(size_t nmemb, size_t size);
void				ft_bzero(void *s, size_t n);

t_list				*ft_lstnew(void *content);
void				ft_lstprepend(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstappend(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));

char				*ft_strndup(const char *s, size_t n);
char				*ft_strdup(const char *s);
char				**ft_strdupv(char *const *src);
void				ft_strrev(char *str);
char				*ft_strnew(size_t size);
char				*ft_strtrim(const char *s, const char *set);
char				*ft_strchr(const char *s, int c);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
size_t				ft_strlen(const char *s);
char				*ft_strrchr(const char *s, int c);
char				*ft_strncpy(char *dest, const char *src, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strncat(char *dest, const char *src, size_t n);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strlwr(char *str);
char				*ft_strupr(char *str);
char				**ft_strsplit(char const *s, char c);
char				*ft_strstr(const char *big, const char *little);
char				*ft_strnstr(const char *big, const char *little,
						size_t len);
size_t				ft_strlcpy(char *dest, const char *src, size_t size);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
char				*ft_strcat(char *dest, const char *src);
bool				ft_strisnum(const char *s);
bool				ft_strislwr(const char *s);
bool				ft_strisupr(const char *s);
char				*ft_strcpy(char *dest, const char *src);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
bool				ft_strisprint(const char *s);
bool				ft_strisalpha(const char *s);

size_t				ft_wrdlen(char const *s, char c);

void				ft_putc(char c, int fd);
void				ft_puts(const char *s, int fd);
void				ft_puti(int n, int fd);

int					ft_printf(const char *format, ...);

char				*ft_getline(int fd);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

#endif