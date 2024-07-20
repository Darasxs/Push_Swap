/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 12:34:54 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/07/20 18:31:00 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*last_elem(t_list *stack)
{
	while (stack && stack->next)
		stack = stack->next;
	return (stack);
}

void	ra(t_list **stack, int check)
{
	t_list	*tmp1;
	t_list	*tmp2;

	if (check == 1)
		write(1, "ra\n", 3);
	if (stack != NULL)
	{
		if (*stack && (*stack)->next)
		{
			tmp1 = *stack;
			*stack = (*stack)->next;
			tmp1->next = NULL;
			tmp2 = last_elem(*stack);
			tmp2->next = tmp1;
		}
	}
}

void	rb(t_list **stack, int check)
{
	t_list	*tmp1;
	t_list	*tmp2;

	if (check == 1)
		write(1, "rb\n", 3);
	if (stack != NULL)
	{
		if (*stack && (*stack)->next)
		{
			tmp1 = *stack;
			*stack = (*stack)->next;
			tmp1->next = NULL;
			tmp2 = last_elem(*stack);
			tmp2->next = tmp1;
		}
	}
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	if (stack_a != NULL && stack_b != NULL)
	{
		ra(stack_a, 0);
		rb(stack_b, 0);
		write(1, "rr\n", 3);
	}
}
