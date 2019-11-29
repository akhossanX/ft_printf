/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybouras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 16:27:37 by aybouras          #+#    #+#             */
/*   Updated: 2019/11/24 19:51:06 by akhossan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

typedef unsigned long long	t_ull;

int					ft_isdigit(int c);
size_t				ft_strlen(const char *s);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strdup(const char *s1);
long long int		ft_atoll(const char *str);
int					ft_isspace(int c);
char				*ft_strcat(char *s1, const char *s2);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(const char *s1, const char *s2);
int					ft_putchar(char c);
int					ft_putstr(char const *s);
int					ft_islower(int c);
int					ft_isupper(int c);
char				*ft_ltoa(long long n);
void				ft_putnchar(char c, long n);
int					ft_contains(const char *set, char c);
char				*ft_strndup(const char *s, size_t times);
char				*ft_utoa(unsigned long long n);
int					ft_indexof(char *s, char c);
long				ft_abs(long nb);
char				*ft_strjoin_free(char *s1, char *s2);
void				ft_strupper(char *str);

#endif
