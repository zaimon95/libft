/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sla-gran <sla-gran@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:04:10 by sla-gran          #+#    #+#             */
/*   Updated: 2025/10/20 16:04:10 by sla-gran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	size_t	test;

	test = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (test / size != nmemb)
		return (NULL);
	return (malloc(size * nmemb));
}
