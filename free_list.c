/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 17:54:29 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/07/19 13:49:31 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_list(t_list *stack)
{
	t_list	*tmp;

	while(stack)
	{
		tmp = stack;
		stack = stack->next;
		free(tmp);
	}
	stack = NULL;
}
int		return_error(t_list **stack)
{
	free_list(*stack);

	write(1, "Error\n", 6);
	exit(1);
}