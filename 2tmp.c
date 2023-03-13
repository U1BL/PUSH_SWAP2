/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2tmp.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mofaisal <mofaisal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:23:12 by mofaisal          #+#    #+#             */
/*   Updated: 2023/03/13 21:27:04 by mofaisal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int	content;
	struct Node *next;
}t_node;

t_node *ft_lstnew(int content)
{
	t_node	*result = malloc(sizeof(t_node));

	result->content = content;
	result->next = NULL;

	return (result);
}

void swap_stacka(t_node **stack)
{	
	if (stack == NULL || (*stack)->next == NULL)
	{
		return;
	}

	t_node *n_42 = *stack;
	t_node *n_402 = n_42->next;
	
	n_42->next = n_402->next;
	n_402->next = n_42;
	*stack = n_402;
	
	// while (stack)
	// {
	// 	printf("%d ", (*stack)->content);
	// 	*stack = (*stack)->next;
	// }

}


void	ft_lstadd_front(t_node **lst, t_node *new)
{
	if (!lst)
		return ;
	new->next = *(lst);
	*(lst) = new;
}


// int main(int ac, char **av)
// {
// 	int i = 1;
// 	t_node *stack_a = ft_lstnew(atoi(av[i]));
// 	while (av[++i])
// 	{
// 		ft_lstadd_front(&stack_a, ft_lstnew(atoi(av[i])));
// 	}
	
// 	while (stack_a)
// 	{
// 		printf("%d ", (stack_a)->content);
// 		stack_a = (stack_a)->next;
// 	}
// 	return (0);
// }