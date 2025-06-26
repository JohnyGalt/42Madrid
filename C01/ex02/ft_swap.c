/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skozhan <skozhan@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 11:04:06 by skozhan           #+#    #+#             */
/*   Updated: 2025/06/23 14:01:02 by skozhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
#include <stdio.h>

int main(void)
{
	int x = 10;
	int y = 20;

	printf("Before swap: x = %d, y = %d\n", x, y);

	ft_swap(&x, &y);

	printf("After swap: x = %d, y = %d\n", x, y);

	return (0);
}
*/