/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 22:57:07 by bpires-k          #+#    #+#             */
/*   Updated: 2026/05/19 22:57:08 by bpires-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ns;
	size_t	i;
	size_t	j;

	ns = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ns)
		return (0);
	i = 0;
	while (s1[i])
	{
		ns[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		ns[i + j] = s2[j];
		j++;
	}
	ns[i + j] = '\0';
	return (ns);
}
