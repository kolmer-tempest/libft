/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 17:33:43 by bpires-k          #+#    #+#             */
/*   Updated: 2026/05/19 17:33:44 by bpires-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(long i)
{
	int	len;

	len = 0;
	if (i <= 0)
		len++;
	while (i != 0)
	{
		len++;
		i = i / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	i;

	i = n;
	len = int_len(i);
	str = (char *) malloc(len + 1);
	if (!str)
		return (NULL);
	if (i == 0)
		str[0] = '0';
	if (i < 0)
	{
		str[0] = '-';
		i = -i;
	}
	str[len] = '\0';
	len--;
	while (i > 0)
	{
		str[len] = i % 10 + '0';
		i = i / 10;
		len--;
	}
	return (str);
}
