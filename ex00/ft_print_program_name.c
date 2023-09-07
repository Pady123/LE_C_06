/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmekoudi <gmekoudi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:40:08 by gmekoudi          #+#    #+#             */
/*   Updated: 2023/09/07 18:22:20 by gmekoudi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	*name;

	i = 0;
	if (argc > 0)
	{		
		name = argv[0];
		while (name[i] != '\0')
		{
			i++;
		}
		write(1, name, i);
		write(1, "\n", 1);
	}
	return (0);
}
