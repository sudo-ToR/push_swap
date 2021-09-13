/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tor <tor@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:38:34 by marvin            #+#    #+#             */
/*   Updated: 2021/09/13 16:38:16 by tor              ###   ########.fr       */
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
	main->a = malloc(sizeof(t_int_table));
	main->b = malloc(sizeof(t_int_table));
	main->a->table = malloc(sizeof(int) * size);
	main->a->len = size;
	while (splited[i])
	{
		main->a->table[i] = ft_atoi(splited[i]);
		i++;
	}
	free_str_table(splited);
	main->b->table = ft_calloc(main->a->len, sizeof(int));
	main->b->len = 0;
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
