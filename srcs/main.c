/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tor <tor@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 17:26:14 by lnoirot           #+#    #+#             */
/*   Updated: 2021/12/05 12:11:09 by tor              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_struct_push_swap(t_push_swap *to_free)
{
	free(to_free->a->table);
	free(to_free->a);
	free(to_free->b->table);
	free(to_free->b);
}

int	find_index(t_push_swap *main, int index_to_find)
{
	int	ret;
	int	index;

	ret = 0;
	index = -1;
	while (++index < main->a->len)
	{
		if (main->a->table[index] < main->a->table[index_to_find])
			ret++;
	}
	return (ret);
}

void	find_value(t_int_table *tr, t_push_swap *main)
{
	int		i;

	i = -1;
	while (++i < main->a->len)
		tr->table[i] = find_index(main, i);
}

void	translate_parsed_values(t_push_swap *main)
{
	t_int_table	*tr;
	t_int_table	*tmp;

	tr = malloc(sizeof(t_int_table));
	tr->table = malloc(sizeof(int) * main->a->len);
	tr->len = main->a->len;
	find_value(tr, main);
	tmp = main->a;
	main->a = tr;
	free(tmp->table);
	free(tmp);
}

int	main(int ac, char **av)
{
	t_push_swap		main;

	if (ac < 2)
		return (0);
	ft_memset(&main, 0, sizeof(t_push_swap));
	parsing(&av[1], &main);
	translate_parsed_values(&main);
	main.size_sample = main.a->len;
	sorting_a(&main);
	free_struct_push_swap(&main);
	return (0);
}
