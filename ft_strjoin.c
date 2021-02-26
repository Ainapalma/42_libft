/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agermoge <agermoge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 12:43:21 by agermoge          #+#    #+#             */
/*   Updated: 2021/02/02 17:02:39 by agermoge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Allocates (with malloc(3)) and returns a new string,
** which is the result of the concatenation of ’s1’ and ’s2’.
** #1. The prefix string.
** #2. The suffix string.
*/

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 && !s2)
		return (NULL);
	if (!(s3 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)
			+ 1))))
		return (NULL);
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	s3[i] = '\0';
	return (s3);
}
