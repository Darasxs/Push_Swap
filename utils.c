/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 12:59:04 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/07/06 16:47:01 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*find_smallest_number(t_list *stack)
{
	t_list	*tmp;
	t_list	*smallest;

	if (stack == NULL)
		return (NULL);

	tmp = stack;
	smallest = stack;

	while (tmp)
	{
		if (tmp->content < smallest->content)
			smallest = tmp;
		tmp = tmp->next;
	}
	return (smallest);
}

