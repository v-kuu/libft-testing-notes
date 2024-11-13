/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .test.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuusela <vkuusela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 10:38:06 by vkuusela          #+#    #+#             */
/*   Updated: 2024/11/07 10:39:20 by vkuusela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	delete(void *content);
void	hacker(void *content);
void	*superhacker(void *content);

int	main(void)
{
	char	string1[] = "Hello every ";
	char	string2[] = "one from ";
	char	string3[] = "here !";
	t_list	*start;

	start = ft_lstnew(string2);
	ft_lstadd_front(&start, ft_lstnew(string1));
	ft_lstadd_back(&start, ft_lstnew(string3));
	printf("%s\n", (char *)ft_lstlast(start)->content);

	int size = ft_lstsize(start);
	printf("%d\n", size);
	t_list *temp = start;
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	ft_lstiter(start, &hacker);
	printf("%s\n", (char *)start->content);

	t_list	*new = ft_lstmap(start, superhacker, delete);
	temp = new;
	while (temp)
	{
		printf("%s\n", (char *)new->content);
		temp = temp->next;
	}
	printf("Done with map print");
	ft_lstclear(&new, &delete);
	ft_lstclear(&start, &delete);
	temp = start;
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	return (0);
}

void	delete(void *content)
{
	char *jou = content;
	jou = 0;
}
void	hacker(void *content)
{
	char	*string = (char *)content;
	while (*string)
	{
		*string = ft_toupper(*string);
		string++;
	}
}
void	*superhacker(void *content)
{
	int	index = 0;
	char *string = (char *)content;
	while (string[index])
	{
		string[index] = ft_toupper(string[index]);
		index++;
	}
	return (string);
}
