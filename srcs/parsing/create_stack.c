/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:38:34 by marvin            #+#    #+#             */
/*   Updated: 2021/08/21 19:31:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_stack_a(t_push_swap *main, char *arg)
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
}
