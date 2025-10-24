/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sla-gran <sla-gran@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:32:32 by sla-gran          #+#    #+#             */
/*   Updated: 2025/10/15 16:32:32 by sla-gran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	size_t		size;
	char		*d;
	const char	*s;

	s = (const char *)src;
	d = (char *)dest;
	i = 0;
	size = n;
	if (src < dest)
		while (n--)
			d[n] = s[n];
	else
		while (++i < n)
			d[i] = s[i];
	return (dest);
}
