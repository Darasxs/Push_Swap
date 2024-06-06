/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:11:47 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/06/06 19:19:49 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	**arguments;

	arguments = argv;
	stack_a = NULL;
	stack_b = NULL;
	
	if (argc == 1 || (argc == 2 && argv[1][0] == 0))
		return EXIT_FAILURE;
	else if (argc == 2)
	{
		arguments = ft_split(argv[1], ' ');
		stack_a = initialize_stack(arguments - 1);
	}
	else
		stack_a = initialize_stack(arguments);
	if (!stack_a)
		return (EXIT_FAILURE);
	
	t_list	*tmp;
	tmp = stack_a;
	while(tmp != NULL)
	{
		printf("%d ", *tmp->content);
		tmp = tmp->next;
	}
	return (0);
}

// if stack is sorted
// do nothing

// the program cannot work if it encounters any char

// duplicate numbers are not allowed

// INT MIN and INT MAX should work fine

// nothing is specified when ints and strings are mixed. it's up to you

// if 3 elements in the stack

// use simple algorithm to sort it
