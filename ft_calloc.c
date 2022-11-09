/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:50:26 by maroy             #+#    #+#             */
/*   Updated: 2022/10/24 14:56:50 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*b;

	if (SIZE_MAX / count < size)
		return (NULL);
	b = malloc(count * size);
	if (!b)
		return (b);
	ft_bzero(b, count * size);
	return (b);
}
