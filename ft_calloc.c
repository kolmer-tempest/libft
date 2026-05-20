/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 17:32:20 by bpires-k          #+#    #+#             */
/*   Updated: 2026/05/19 17:32:21 by bpires-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	t_size;

	if (nmemb != 0 && size > (SIZE_MAX / nmemb))
		return (0);
	if (nmemb == 0 || size == 0)
		return (malloc(1));
	t_size = nmemb * size;
	p = malloc(t_size);
	if (!p)
		return (0);
	ft_bzero(p, t_size);
	return (p);
}
