/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tor <tor@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 17:26:14 by lnoirot           #+#    #+#             */
/*   Updated: 2021/09/05 18:35:58 by tor              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_struct_push_swap(t_push_swap *to_free)
{
	free(to_free->a);
	free(to_free->b);
}

int	main(int ac, char **av)
{
	t_push_swap		main;
	char			*line;
	int				i;

	i = 0;
	if (ac < 2)
		return (0);
	ft_memset(&main, 0, sizeof(t_push_swap));
	parsing(&av[1], &main);
	print_stack(main.a, main.b, main.len_a, main.len_b);
	int min = ft_min(main.a, main.len_a);
	int max = ft_max(main.a, main.len_a);
	int med = ft_median(main.a, main.len_a);
	while (get_next_line(0, &line))
	{
		if (!ft_strcmp(line, "sa"))
			swap('a', main.a, main.len_a);
		else if (!ft_strcmp(line, "sb"))
			swap('b', main.b, main.len_b);
		else if (!ft_strcmp(line, "ss"))
			d_swap(&main);
		else if (!ft_strcmp(line, "pb"))
			push_b(&main);
		else if (!ft_strcmp(line, "pa"))
			push_a(&main);
		else if (!ft_strcmp(line, "ra"))
			rotate('a', main.a, main.len_a);
		else if (!ft_strcmp(line, "rb"))
			rotate('b', main.b, main.len_b);
		else if (!ft_strcmp(line, "rr"))
			d_rotate(&main);
		else if (!ft_strcmp(line, "rra"))
			r_rotate('a', main.a, main.len_a);
		else if (!ft_strcmp(line, "rrb"))
			r_rotate('b', main.b, main.len_b);
		else if (!ft_strcmp(line, "rrr"))
			r_drotate(&main);	
		i++;		
	printf("min : %d\t\tmax = %d\t\tmed = %d\n", min, max, med);
		print_stack(main.a, main.b, main.len_a, main.len_b);
		printf("mvt = %d\n", i);
	}
	free_struct_push_swap(&main);
	return (0);
}
