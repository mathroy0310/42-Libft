/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:50:26 by maroy             #+#    #+#             */
/*   Updated: 2022/10/20 16:00:44 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*b;

	if (SIZE_MAX / cout < size)
		return (NULL);
	b = malloc(cout * size);
	if (!b)
		return (NULL);
	ft_bzero(b, count * size);
	return (b);
}
