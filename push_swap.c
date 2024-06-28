/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 13:44:09 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/06/28 15:27:59 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_list **stack_a, t_list **stack_b)
{
	int		biggest;
	int		smallest;

	pa(stack_a, stack_b);
	pa(stack_a, stack_b);

	biggest = (*stack_b)->content;
	smallest = (*stack_b)->next->content;
	
	if(smallest > biggest)
		sb(stack_b, 1);

	

}