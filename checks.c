/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:02:00 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/06/07 15:40:35 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// still need to include this function in the init
bool	is_sorted(t_list *head)
{
	t_list	*tmp;

	tmp = head;
	while (tmp->next)
	{
		if (tmp->content > tmp->next->content)
			return (false);
		tmp = tmp->next;
	}
	return (true);
}

bool	check_duplicate(t_list *head, long n)
{
	t_list	*tmp;

	tmp = head;
	while (tmp)
	{
		if (*(tmp->content) == n)
			return (true);
		tmp = tmp->next;
	}
	return (false);
}

bool	string_error(char *str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9') && (*str != 32))
			return (true);
		str++;
	}
	return (false);
}
