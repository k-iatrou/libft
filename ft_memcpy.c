/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiatrou <kiatrou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 14:45:55 by kiatrou           #+#    #+#             */
/*   Updated: 2025/06/26 21:29:59 by kiatrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (dst == (void *)0 && src == (void *)0)
		return (dst);
	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	while (n > 0)
	{
		*(d++) = *(s++);
		n--;
	}
	return (dst);
}
