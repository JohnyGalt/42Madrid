/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skozhan <skozhan@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 12:00:09 by skozhan           #+#    #+#             */
/*   Updated: 2025/06/23 14:03:28 by skozhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/*
#include <stdio.h>

int	main(void)
{
	int a =10;
	int b = 3;

	printf("Before: a = %d, b = %d\n", a, b);

	ft_ultimate_div_mod(&a, &b);

	printf("After: a = %d, b = %d\n", a, b);

	return (0);
}
*/