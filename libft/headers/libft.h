/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpilotte <jpilotte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 21:38:45 by jpilotte          #+#    #+#             */
/*   Updated: 2022/10/15 14:07:40 by jpilotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

//GNL
char	*get_next_line(int fd);

//Printf
int		ft_printf(const char *format, ...);
void	get_format(char const *str, va_list arg, int index, int *arg_len);
void	ft_print_char(va_list arg, int *arg_len);
void	ft_print_int(va_list arg, int *arg_len);
void	ft_print_usigned_int(va_list arg, int *arg_len);
void	ft_print_hex(va_list arg, int *arg_len, char c);
void	ft_print_hex_address(va_list arg, int *arg_len);
void	ft_print_str(va_list arg, int *arg_len);
void	ft_putchar(char c, int *len);
void	ft_putnbr(int n, int *len);
void	ft_putnbr_base(int n, char *base, int *len);
void	ft_putnbr_base_unsigned_int(unsigned int n, char *base, int *len);
void	ft_putnbr_base_unsigned_long(unsigned long n, char *base, int *len);
void	ft_putnbr_u(unsigned int n, int *base_len);
void	ft_putstr(char *s, int *base_len);
size_t	ft_strlen(const char *str);
int		ft_isprint(int c);
void	*ft_memset(void *str, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isalnum(int c);
void	*ft_calloc(size_t count, size_t size);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
char	*ft_itoa(int n);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memmove(void *str1, const void *str2, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *s1);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy( char *dst, const char *src, size_t size);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t n);
char	*ft_strrchr(const char *str, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
