/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skozhan <skozhan@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 12:36:48 by skozhan           #+#    #+#             */
/*   Updated: 2025/06/23 14:06:57 by skozhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

/*
#include <stdio.h>

void print_array(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		if (i < size - 1)
		printf(", ");
		i++;
	}
	printf("\n");
}

int main(void)
{
	int tab[] = {1, 2, 3, 4, 5};
	int size = 5;

	printf("Before: ");
	print_array(tab, size);

	ft_rev_int_tab(tab, size);

	printf("After: ");
	print_array(tab, size);

	return (0);
}
*/