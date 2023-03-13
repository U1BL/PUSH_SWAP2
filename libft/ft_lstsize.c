/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mofaisal <mofaisal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:27:20 by jalwahei          #+#    #+#             */
/*   Updated: 2023/03/13 21:33:15 by mofaisal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(int content)
{
	t_list *res = malloc(sizeof(t_list));

	res->content = content;
	res->next = NULL;

	return (res);
}

int	ft_lstsize(t_list *lst)
{
	size_t	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
// int main ()
// {
// 	t_list *a = ft_lstnew("1"); 
// 	t_list *b = ft_lstnew("2"); 
// 	t_list *c = ft_lstnew("3"); 
// 	t_list *d = ft_lstnew("4"); 
// 	t_list *e = ft_lstnew("45");
	
// 	a->next = b;
// 	b->next = c;
// 	c->next = d;
// 	d->next = e;
// 	printf("%d", ft_lstsize(a));
// }