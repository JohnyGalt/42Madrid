/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skozhan <skozhan@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 12:13:25 by skozhan           #+#    #+#             */
/*   Updated: 2025/06/23 14:04:46 by skozhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

/*
#include <stdio.h>

int main(void)
{
	char *text = "Hello 42 Piscine!";

	ft_putstr(text);

	write(1, "\n", 1);

	return (0);
}
*/