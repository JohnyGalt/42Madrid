/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skozhan <skozhan@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 11:17:21 by skozhan           #+#    #+#             */
/*   Updated: 2025/06/23 14:02:20 by skozhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

int main(void)
{
	int a = 10;
	int b = 3;
	int div_result;
	int mod_result;

	ft_div_mod(a, b, &div_result, &mod_result);

	printf("a = %d,b = %d\n", a, b);
	printf("Division result: %d\n", div_result);
	printf("Modulo result: %d\n", mod_result);

	return (0);
}
*/