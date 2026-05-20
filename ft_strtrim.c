/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpires-k <bpires-k@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 22:59:14 by bpires-k          #+#    #+#             */
/*   Updated: 2026/05/19 22:59:26 by bpires-k         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static int	is_set(const char s1, const char *set)
// {
// 	size_t	j;

// 	j = 0;
// 	while (set[j])
// 	{
// 		if (s1 == set[j])
// 			return (0);
// 		j++;
// 	}
// 	return (1);
// }

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t		start;
	size_t		end;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (start < end && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));
}
