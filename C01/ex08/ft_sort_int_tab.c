/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skozhan <skozhan@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 12:54:57 by skozhan           #+#    #+#             */
/*   Updated: 2025/06/23 14:08:05 by skozhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	while (size > 0)
	{
		i = 0;
		while (i < size -1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		size--;
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
    int tab[] = {5, 3, 4, 1, 2};
    int size = 5;
    printf("Before sort: ");
    print_array(tab, size);
    ft_sort_int_tab(tab, size);
    printf("After sort:  ");
    print_array(tab, size);  // Expected: 1, 2, 3, 4, 5
    return (0);
}
*/