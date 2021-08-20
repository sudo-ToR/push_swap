/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoirot <lnoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 17:17:26 by lnoirot           #+#    #+#             */
/*   Updated: 2021/08/20 17:17:51 by lnoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	**ft_insert_str(int index, char **realloc, char *insert)
{
	int		len;
	int		i;
	int		j;
	char	**tmp;

	len = str_table_size(realloc) + 1;
	tmp = realloc;
	i = 0;
	j = 0;
	realloc = malloc(sizeof(char *) * (len + 1));
	if (!realloc)
		exit(1);
	realloc[len] = NULL;
	if (!tmp)
		realloc[i++] = insert;
	while (i < len)
	{
		if (i == index)
			realloc[i++] = insert;
		realloc[i++] = tmp[j++];
	}
	free(tmp);
	return (realloc);
}
