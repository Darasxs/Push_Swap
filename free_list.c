/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 17:54:29 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/07/23 13:58:22 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_split(char **arguments)
{
	int	i;

	i = 0;
	while (arguments[i])
	{
		free(arguments[i]);
		i++;
	}
	free(arguments);
}

int	return_error(t_list **stack, char **arguments, int split_flag)
{
	t_list	*tmp;

	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
	if (split_flag)
		free_split(arguments);
	write(1, "Error\n", 6);
	exit(1);
}

void	free_stack(t_list **stack)
{
	t_list	*tmp;

	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}
