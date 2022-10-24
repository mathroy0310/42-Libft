/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:20:32 by maroy             #+#    #+#             */
/*   Updated: 2022/10/24 13:54:53 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_digitcount(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*ft_itoa2(char *str, int nbr, int len, int s)
{
	if (nbr != 0)
		str = malloc(sizeof(char) * (len + 1));
	else
		return (str = ft_strdup("0"));
	if (!str)
		return (0);
	if (nbr < 0)
		s = -1;
	str[len] = '\0';
	while (--len)
	{
		str[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (s == -1)
		str[0] = '-';
	else
		str[0] = (nbr % 10) + '0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	int		nbr;
	int		s;

	nbr = n;
	len = ft_digitcount(nbr);
	s = 1;
	if (!(str = ft_itoa2(str, nbr, len, s)))
		return (0);
	return (str);
}

int	main(void)
{
	int	i = 38;

	printf("%s\n", ft_itoa(i));
	return (0);
}
