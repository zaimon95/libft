/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sla-gran <sla-gran@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:43:41 by sla-gran          #+#    #+#             */
/*   Updated: 2025/10/20 13:43:41 by sla-gran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
size_t				ft_strlen(const char *s);
void				*ft_memset(void *s, int c, size_t n);
void				*ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
size_t				strlcpy(char *dst, const char *src, size_t size);
size_t				strlcat(char *dst, const char *src, size_t size);
int					toupper(int c);
int					tolower(int c);
char				*strchr(const char *s, int c);
char				*strrchr(const char *s, int c);
int					strncmp(const char *s1, const char *s2, size_t n);
void				*memchr(const void *s, int c, size_t n);
int					memcmp(const void *s1, const void *s2, size_t n);
char				*strnstr(const char *big, const char *little, size_t len);
int					atoi(const char *nptr);

#endif
