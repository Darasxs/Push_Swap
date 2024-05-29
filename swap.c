/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 14:09:16 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/05/29 15:02:19 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*sa(t_list **stack, int check)
{
	t_list	*tmp1;
	t_list	*tmp2;

	if (check == 1)
		write(1, "sa", 3);
	if (stack != 0)
	{
		if (*stack && (*stack)->next)
		{
			tmp1 = (*stack);
			tmp2 = (*stack)->next;
			tmp1->next = tmp1->next->next;
			tmp2->next = tmp1;
			*stack = tmp2;
		}
	}
	return (*stack);
}

void	*sb(t_list **stack, int check)
{
	t_list	*tmp1;
	t_list	*tmp2;

	if (check == 1)
		write(1, "sb", 3);
	if (stack != 0)
	{
		if (*stack && (*stack)->next)
		{
			tmp1 = (*stack);
			tmp2 = (*stack)->next;
			tmp1->next = tmp1->next->next;
			tmp2->next = tmp1;
			*stack = tmp2;
		}
	}
	return (*stack);
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	sa(stack_a, 0);
	sb(stack_b, 0);
	write(1, "ss", 3);
}
