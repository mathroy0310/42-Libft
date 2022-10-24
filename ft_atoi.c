/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:10:02 by maroy             #+#    #+#             */
/*   Updated: 2022/10/20 14:04:34 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	res;

	i = 0;
	s = 1;
	res = 0;
	while ((str[i] == ' ') || (str[i] == '\n') || (str[i] == '\t'))
		i++;
	if (str[i] == '-')
	{
		if ((str[i + 1] == '-') || (str[i + 1] == '+'))
			return (NULL);
		s *= -1;
	}
	i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res);
}
