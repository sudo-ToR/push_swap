/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoirot <lnoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 17:26:14 by lnoirot           #+#    #+#             */
/*   Updated: 2021/08/20 18:24:41 by lnoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

char	*concat_table(char **to_concat)
{
	char	*ret;
	char	*tmp;
	int		i;

	ret = ft_strdup(to_concat[0]);
	if (str_table_size(to_concat) < 2)
		return (ret);
	ret = ft_strjoin(ret, " ");
	i = 1;
	while (to_concat[i])
	{
		tmp = ret;
		ret = ft_strjoin(ret, ft_strdup(to_concat[i]));
		ret = ft_strjoin(ret, " ");
		free(tmp);
		i++;
	}
	return (ret);
}

int		main(int ac, char **av)
{
	char	*arg;
	int		i;

	i = 1;
	if (ac < 2)
		return (0);
	arg = concat_table(&av[1]);
	printf("%s\n", arg);
	return (0);
}