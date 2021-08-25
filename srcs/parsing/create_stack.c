/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:38:34 by marvin            #+#    #+#             */
/*   Updated: 2021/08/25 13:21:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_stack(t_push_swap *main, char *arg)
{
	char	**splited;
	int		i;
	int		size;

	splited = ft_split(arg, "\f\t\n\r\v ");
	i = 0;
	size = str_table_size(splited);
	main->a = malloc(sizeof(int) * size);
	main->len_a = size;
	while (splited[i])
	{
		main->a[i] = ft_atoi(splited[i]);
		i++;
	}
	free_str_table(splited);
	main->b = ft_calloc(main->len_a, sizeof(int));
	main->len_b = 0;
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
