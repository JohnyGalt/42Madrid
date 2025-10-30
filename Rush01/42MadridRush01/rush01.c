/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skozhan <skozhan@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 23:36:16 by skozhan           #+#    #+#             */
/*   Updated: 2025/06/22 12:17:46 by skozhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	parse_input(char *str,	int	views[16]);
int	check_views(int	grid[4][4],	int	views[16]);
void	print_grid(int grid[4][4]);

int	is_valid(int grid[4][4], int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == num || grid[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

int	solve_next(int grid[4][4], int pos, int views[16])
{
	int	row;
	int	col;
	int	num;

	row = pos / 4;
	col = pos % 4;
	num = 1;
	while (num <= 4)
	{
		if (is_valid(grid, row, col, num))
		{
			grid[row][col] = num;
			if (solve(grid, pos + 1, views))
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}

int	solve(int grid[4][4], int pos, int views[16])
{
	if (pos == 16)
	{
		if (check_views(grid, views))
		{
			print_grid(grid);
			return (1);
		}
		return (0);
	}
	return (solve_next(grid, pos, views));
}

int	main(int argc, char **argv)
{
	int	views[16];
	int	grid[4][4];
	int	i;
	int	j;

	if (argc != 2 || !parse_input(argv[1], views))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	if (!solve(grid, 0, views))
		write(1, "Error\n", 6);
	return (0);
}
