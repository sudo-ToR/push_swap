/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoirot <lnoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 11:43:16 by lnoirot           #+#    #+#             */
/*   Updated: 2021/08/19 16:16:22 by lnoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*r;
	int		j;

	j = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	r = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!r)
		return (NULL);
	while (*s1)
	{
		r[j++] = *s1;
		s1++;
	}
	while (*s2)
	{
		r[j++] = *s2;
		s2++;
	}
	r[j] = '\0';
	return (r);
}
