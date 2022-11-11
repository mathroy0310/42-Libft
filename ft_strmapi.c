/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:06:08 by maroy             #+#    #+#             */
/*   Updated: 2022/11/09 16:49:40 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (s)
	{
		i = 0;
		str = malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (!str)
			return (NULL);
		while (i < ft_strlen(s))
		{
			str[i] = f((unsigned int)i, s[i]);
			i++;
		}
		str[i] = 0;
		return (str);
	}
	return (NULL);
}
