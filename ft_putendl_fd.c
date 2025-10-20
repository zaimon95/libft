/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sla-gran <sla-gran@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:40:30 by sla-gran          #+#    #+#             */
/*   Updated: 2025/10/20 16:40:30 by sla-gran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlen(const char *s);
void	ft_putendl_fd(char *s, int fd)
{
	size_t	len;

	s += '\n';
	len = ft_strlen(s);
	write(fd, s, len);
}
