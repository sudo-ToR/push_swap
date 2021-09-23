/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tor <tor@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 17:26:14 by lnoirot           #+#    #+#             */
/*   Updated: 2021/09/21 10:21:01 by tor              ###   ########.fr       */
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

int	main(int ac, char **av)
{
	t_push_swap		main;
	// t_ptr_mvt		mvt_lst[11];
	// typedef void (*t_ptr_mvt)(t_push_swap *);
	// void			(*ptr_mvt[11])(t_push_swap *);
	// char			*line;
	// int				i;

	// i = 0;
	if (ac < 2)
		return (0);
	ft_memset(&main, 0, sizeof(t_push_swap));
	parsing(&av[1], &main);
	// int min = ft_min(main.a);
	// int max = ft_max(main.a);
	// int med = ft_median(main.a);
	
	// mvt_lst = {swap_a, swap_b};
	sorting_a(&main);
	print_stack(main.a, main.b);
	// while (get_next_line(0, &line))
	// {
	// 	if (!ft_strcmp(line, "sa"))
	// 		swap_a(&main);
	// 	else if (!ft_strcmp(line, "sb"))
	// 		swap_b(&main);
	// 	else if (!ft_strcmp(line, "ss"))
	// 		d_swap(&main);
	// 	else if (!ft_strcmp(line, "pb"))
	// 		push_b(&main);
	// 	else if (!ft_strcmp(line, "pa"))
	// 		push_a(&main);
	// 	else if (!ft_strcmp(line, "ra"))
	// 		rotate_a(&main);
	// 	else if (!ft_strcmp(line, "rb"))
	// 		rotate_b(&main);
	// 	else if (!ft_strcmp(line, "rr"))
	// 		d_rotate(&main);
	// 	else if (!ft_strcmp(line, "rra"))
	// 		r_rotate_a(&main);
	// 	else if (!ft_strcmp(line, "rrb"))
	// 		r_rotate_b(&main);
	// 	else if (!ft_strcmp(line, "rrr"))
	// 		r_drotate(&main);	
	// 	i++;
	// printf("min : %d\t\tmax = %d\t\tmed = %d\n", min, max, med);
	// 	print_stack(main.a, main.b);
	// 	printf("mvt = %d\t\tsorted = %d\n", i, is_sorted_in_circle_decres(main.a));
	// }
	free_struct_push_swap(&main);
	return (0);
}
