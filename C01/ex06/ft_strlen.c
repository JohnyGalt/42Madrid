/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skozhan <skozhan@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 12:25:30 by skozhan           #+#    #+#             */
/*   Updated: 2025/06/23 14:05:48 by skozhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*text = "Hello Piscine 42!";
	int	length;

	length = ft_strlen(text);

	printf("Length of string: %d\n", length);

	return (0);
}
*/