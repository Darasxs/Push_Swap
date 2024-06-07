/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 17:55:09 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/06/07 16:14:33 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_atol(const char *str)
{
	long	result;
	int		counter;
	int		sign;

	result = 0;
	counter = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		counter++;
		if (counter > 1)
			return (0);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

t_list	*initialize_stack(char **argv)
{
	size_t		i;
	long		*number;
	t_list		*stack;
	t_list		*node;

	stack = NULL;
	i = 1;
	while (argv[i])
	{
		if (string_error(argv[i]) == true)
			return (NULL);
		number = malloc(sizeof(long));
		if (!number)
		{
			free_list(stack);
			return (NULL);
		}
		*number = ft_atol(argv[i]);
		if (check_duplicate(stack, *number))
		{
			free(number);
			free_list(stack);
			return (NULL);
		}
		node = ft_lstnew(number);
		if (!node)
		{
			free(number);
			free_list(stack);
			return (NULL);
		}
		ft_lstadd_back(&stack, node);
		i++;
	}
	return (stack);
}
