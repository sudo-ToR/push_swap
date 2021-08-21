/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 14:36:27 by marvin            #+#    #+#             */
/*   Updated: 2021/08/21 19:23:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_number(char *to_check)
{
	int		i;

	i = -1;
	while (to_check[++i])
		if (!is_white_space(to_check[i]) && !ft_isdigit(to_check[i])
			&& to_check[i] != '-')
			return (1);
	return (0);
}

char	*concat_table(char **to_concat)
{
	char	*ret;
	char	*tmp;
	int		i;

	ret = ft_strdup(to_concat[0]);
	if (str_table_size(to_concat) < 2)
		return (ret);
	i = 1;
	while (to_concat[i])
	{
		tmp = ret;
		ret = ft_strjoin(ret, " ");
		ret = ft_strjoin(ret, ft_strdup(to_concat[i]));
		free(tmp);
		i++;
	}
	return (ret);
}
