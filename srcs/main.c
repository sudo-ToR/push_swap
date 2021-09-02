/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tor <tor@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 17:26:14 by lnoirot           #+#    #+#             */
/*   Updated: 2021/09/02 16:09:00 by tor              ###   ########.fr       */
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

	if (ac < 2)
		return (0);
	ft_memset(&main, 0, sizeof(t_push_swap));
	parsing(&av[1], &main);
	print_stack(main.a, main.b, main.len_a, main.len_b);
	printf("min : %d\t\tmax = %d\t\tmed = %d\n", ft_min(main.a, main.len_a), ft_max(main.a, main.len_a), ft_median(main.a, main.len_a));
	free_struct_push_swap(&main);
	return (0);
}
