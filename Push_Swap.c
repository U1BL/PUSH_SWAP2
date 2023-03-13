/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_Swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mofaisal <mofaisal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:28:18 by mofaisal          #+#    #+#             */
/*   Updated: 2023/03/13 21:40:00 by mofaisal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Push_Swap.h"

int ft_digit(char *argv[])
{
	int	i;
	int	j;
	long long value;

	i = 0;
	j = 0;
	while (argv[j])
	{
		if(argv[j][0] == '\0')
			return (ft_printf("ERROR\n"), 0);
		j++;
	}
	while (argv[i])
	{
	 	value = ft_atoi(argv[i]);
		j = 0;
		while (argv[i][j])
		{
			// printf("value is %d\n", value);
			if ((ft_isdigit(argv[i], argv[i][j], &j) && (value <= 2147483647 && value >= -2147483648)) || (argv[i][j] == ' '))
				j++;
			else
				return (ft_printf("Wrong Input\n"), 0);
		}
		i++;
	}
	return (1);
}

int ft_double(char *argv[])
{
	char *str;
	char **strs;
	char *tmp;
	int i;
	int j;
	// int	doubl;
	
	i = 0;
	j = 0;
	str = NULL;
	while (argv[i])
	{
		tmp = ft_strjoin(str, " ");
		str = ft_strjoin(tmp, argv[i]);
		i++;
	}
	
	strs = ft_split(str, ' ');
	if(!ft_digit(strs))
		return(0);
	while (strs[j])
		j++;
	i = 0;
	strs[j] = NULL;
	i = 0;
	while (strs[i])
	{
		j = i + 1;
		while (strs[j])
		{
			if((ft_atoi(strs[i]) - ft_atoi(strs[j])) == 0)
				return (ft_printf("ERROR: Duplicated input found!.\n"), 0);
			j++;
		}
		i++;
	}

	return (0);
}

int ft_space(char *argv[])
{
	int i ;
	int j;
	int trigger;
	
	i = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] == ' ')
				trigger = 1;
			else
			{
				trigger = 0;
				break;
			}
			j++;
		}
		if (trigger == 1)
			return (ft_printf("ERROR: Wrong input\n"), 0);
		
		i++;
	}
	return (0);
}
	
int	main(int argc, char *argv[])
{
	if (argc < 2)
		return (ft_printf("ERROR: Too few arguments\n", 0));
	int j = 0;
	while (argv[j])
	{
		if(argv[j][0] == '\0')
			return (ft_printf("ERROR\n"), 0);
		j++;
	}
	ft_space(argv);
	ft_double(argv + 1);

	int i = 1;
	t_list *stack_a = ft_lstnew(atoi(argv[i]));
	while (argv[++i])
	{
		ft_lstadd_front(&stack_a, ft_lstnew(atoi(argv[i])));
	}
	
	while (stack_a)
	{
		printf("%d ", (stack_a)->content);
		stack_a = (stack_a)->next;
	}
	return (0);
}