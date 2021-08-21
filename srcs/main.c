/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 17:26:14 by lnoirot           #+#    #+#             */
/*   Updated: 2021/08/21 19:34:48 by marvin           ###   ########.fr       */
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
	char			*arg;
	t_push_swap		main;

	if (ac < 2)
		return (0);
	ft_memset(&main, 0, sizeof(t_push_swap));
	arg = concat_table(&av[1]);
	if (check_number(arg))
	{
		printf("Error\n");
		free(arg);
		return (1);
	}
	create_stack_a(&main, arg);
	if (main.len_a == 1)
	{
		free(arg);
		free_struct_push_swap(&main);
		return (0);
	}
	print_int_lst(main.a, main.len_a);
	free_struct_push_swap(&main);
	free(arg);
	return (0);
}
