/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiatrou <kiatrou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 13:48:41 by kiatrou           #+#    #+#             */
/*   Updated: 2025/06/11 14:14:39 by kiatrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char *ptr;
	char fill;

	ptr = (char*)s;
	fill = (char)c;
	while (n-- > 0)
		*(ptr + n) = fill;
	return (s);
}
