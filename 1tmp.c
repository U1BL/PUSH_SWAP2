/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1tmp.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mofaisal <mofaisal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:23:12 by mofaisal          #+#    #+#             */
/*   Updated: 2023/03/13 21:27:11 by mofaisal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void move_sa(t_node *stack)
{	
	if (stack == NULL || stack->next == NULL)
	{
		return;
	}

	t_node *first_node = stack;
	t_node *second_node = first_node->next;
	
	first_node->next = second_node->next;
	second_node->next = first_node;
	stack = second_node;
	
	while (stack)
	{
		printf("%d ", stack->content);
		stack = stack->next;
	}
}

void move_sb(t_node *stack)
{	
	if (stack == NULL || stack->next == NULL ) // if the stack is empty or has only one node
    {
        return ;
    }
	{
		return;
	}

	t_node *first_node = stack; // this is the first node
	t_node *second_node = first_node->next; 
	
	first_node->next = second_node->next;
	second_node->next = first_node;
	stack = second_node;
	
	while (stack)
	{
		printf("%d ", stack->content);
		stack = stack->next;
	}
}
































#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int	content;
	struct Node *next;
} t_node;

typedef struct stack
{
	t_node *top;
}t_stack;

t_node *ft_lstnew(int content)
{
	t_node	*result = malloc(sizeof(t_node));

	result->content = content;
	result->next = NULL;

	return (result);
}

void move_sa(t_stack *stack)
{
    if (stack->top == NULL || stack->top->next == NULL) {
        // Stack has fewer than two nodes, nothing to swap
        return;
    }

    t_node *first_node = stack->top;
    t_node *second_node = first_node->next;

    first_node->next = second_node->next;
    second_node->next = first_node;
    stack->top = second_node;
}

// int main()
// {
//     // Create a stack and initialize it with the linked list
//     t_stack stack;
// 	stack.top = ft_lstnew(42);
//     stack.top->next = ft_lstnew(423);
//     stack.top->next->next = ft_lstnew(4230);
// 	stack.top->next->next->next = ft_lstnew(4239);
//     // Before swapping
//     t_node *current_node = stack.top;
//     while (current_node)
//     {
//         printf("%d\n", current_node->content);
//         current_node = current_node->next;
//     }

//     // Perform the swap
//     printf("sa\n");
//     move_sa(&stack);
    
//     // After swapping
//     current_node = stack.top;
//     while (current_node)
//     {
//         printf("%d\n", current_node->content);
//         current_node = current_node->next;
//     }

//     return 0;
// }