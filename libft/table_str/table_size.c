/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoirot <lnoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 17:13:13 by lnoirot           #+#    #+#             */
/*   Updated: 2021/08/20 17:14:18 by lnoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	str_table_size(char **table)
{
	int	len;

	len = 0;
	if (!table)
		return (len);
	while (table[len])
		len++;
	return (len);
}
