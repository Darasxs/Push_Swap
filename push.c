/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 15:09:50 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/06/03 15:45:50 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	write(1, "pa\n", 3);
	if(stack_a != NULL && stack_b != NULL)
	{
		if(*stack_b)
		{
			tmp = *stack_b;
			*stack_b = (*stack_b)->next;
			tmp->next = *stack_a;
			*stack_a = tmp;
		}
	}
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	
	write(1, "pb\n", 3);
	if(stack_a != NULL && stack_b != NULL)
	{
		if(*stack_a)
		{
			tmp = *stack_a;
			*stack_a = (*stack_a)->next;
			tmp->next = *stack_b;
			*stack_a = tmp;
		}
	}
}
