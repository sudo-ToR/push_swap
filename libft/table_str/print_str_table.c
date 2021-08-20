/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str_table.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoirot <lnoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 17:23:43 by lnoirot           #+#    #+#             */
/*   Updated: 2021/08/20 17:24:18 by lnoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	print_str_table(char **to_print)
{
	int	i;

	i = -1;
	if (!to_print)
		printf("This is an empty table\n");
	else
	{
		while (to_print[++i])
			printf("!%s!\n", to_print[i]);
	}
}
