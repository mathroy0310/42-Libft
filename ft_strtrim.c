/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:56:07 by maroy             #+#    #+#             */
/*   Updated: 2022/10/24 11:25:07 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isset(char c, char const *set)
{
	while (*set)
	{
		if (c == *set++)
		{
			return (1);
		}
		return (0);
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*dst;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	j = ft_strlen(s1);
	while (ft_isset(s1[i], set) == 1)
		i++;
	if (i == j)
	{
		if (!(dst == ft_strdup("")))
			return (NULL);
		else
			return (dest);
	}
	while (ft_isset(s1[j - 1], set) == 1)
		j--;
	dst = ft_substr(s1, i, j - i);
	return (dst);
}