/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 14:36:27 by marvin            #+#    #+#             */
/*   Updated: 2021/08/25 13:45:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	has_only_int(char *arg)
{
	char	**splited;
	int		i;

	splited = ft_split(arg, "\f\t\n\r\v ");
	i = 0;
	while (splited[i])
	{
		if (ft_atol(splited[i]) > INT_MAX || ft_atol(splited[i]) < INT_MIN
			|| ft_strlen(splited[i]) > 11)
		{
			free_str_table(splited);
			return (0);
		}
		i++;
	}
	free_str_table(splited);
	return (1);
}

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

int	is_sorted_lst(int *to_check, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (j < size)
	{
		if (to_check[i] > to_check[j])
			return (0);
		i++;
		j++;
	}
	return (1);
}

int	has_duplicates(int *to_check, int size)
{
	int	i;
	int	j;
	int	tmp;

	j = 0;
	while (j < size)
	{
		i = j + 1;
		while (i < size)
		{
			tmp = to_check[j];
			if (to_check[i] == tmp)
				return (1);
			i++;
		}
		j++;
	}
	return (0);
}

void	parsing(char **to_parse, t_push_swap *main)
{
	char	*arg;

	arg = concat_table(to_parse);
	if (check_number(arg) || !has_only_int(arg))
	{
		printf("Error\n");
		free(arg);
		exit (1);
	}
	create_stack(main, arg);
	if (has_duplicates(main->a, main->len_a))
	{
		printf("Error\n");
		free(arg);
		free_struct_push_swap(main);
		exit (1);
	}
	if (main->len_a == 1 || is_sorted_lst(main->a, main->len_a))
	{
		free(arg);
		free_struct_push_swap(main);
		exit (0);
	}
}
