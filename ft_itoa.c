/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:20:32 by maroy             #+#    #+#             */
/*   Updated: 2022/11/09 11:40:22 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_itoa_digitcount(int n, int *len)
{
	int	i;

	*len = 0;
	i = 0;
	if (n < 0)
	{
		i++;
		*len += 1;
		n = -n;
	}
	while (n > 9)
	{
		n = n / 10;
		*len += 1;
	}
	if (n >= 0)
		*len += 1;
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ft_itoa_digitcount(n, &len);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n > 9)
	{
		str[len - 1] = (n % 10) + 48;
		n = n / 10;
		len--;
	}
	str[len - 1] = (n % 10) + 48;
	return (str);
}
