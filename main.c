/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:11:47 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/06/06 15:57:35 by dpaluszk         ###   ########.fr       */
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
		free(tmp->content);
		free(tmp);
	}
}

t_list	*initialize_stack(char **argv)
{
	size_t	i;
	int		*number;
	t_list	*stack;
	t_list	*node;

	stack = NULL;
	i = 1;
	while (argv[i])
	{
		number = malloc(sizeof(int));
		if (!number)
		{
			free_list(stack);
			return (NULL);
		}
		*number = ft_atoi(argv[i]);
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

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	stack_a = initialize_stack(argv);
	if (!stack_a)
		return (EXIT_FAILURE);
}

// if stack is sorted
// do nothing

// fix split - it doesn't read the first int

// the program cannot work if it encounters any char

// duplicate numbers are not allowed

// INT MIN and INT MAX should work fine

// nothing is specified when ints and strings are mixed. it's up to you

// if 3 elements in the stack

// use simple algorithm to sort it

return (0);
}