/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sla-gran <sla-gran@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:33:38 by sla-gran          #+#    #+#             */
/*   Updated: 2025/10/27 11:09:18 by sla-gran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	size_t	i;
	char	c;
	int	temp;

	temp = n;
	i = 0;
	if (temp < 0)
	{
		temp = -temp;
		i++;
	}
	while (temp > 0)
	{
		temp = temp / 10;
		i++;
	}
	if (n == 0)
	{
		str = malloc (2);
		return ("0");
	}
	str = malloc(sizeof(char) * (i + 1));
	str[i] = 0;
	if (!str)
		return (NULL);
	if (n == -2147483648)
		str = "-2147483648";
	else if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		i--;
		c = n % 10 + '0';
		str[i] = c;
		n = n / 10;
	}
	return (str);
}
