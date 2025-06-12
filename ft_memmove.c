/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kiatrou <kiatrou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 14:23:07 by kiatrou           #+#    #+#             */
/*   Updated: 2025/06/12 14:42:48 by kiatrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	
	char	*char_dest = (char *)dest;
	char	*char_src = (char *)src;	

	for (int i=0; i < n; i++)
		char_dest[i] = char_src[i];

	return dest;
}
