/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skozhan <skozhan@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/21 23:35:44 by skozhan           #+#    #+#             */
/*   Updated: 2025/06/21 23:47:36 by skozhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	count_visible(int *line)
{
	int	max_height;
	int	count;
	int	i;

	max_height = 0;
	count = 0;
	i = 0;
	while (i < 4)
	{
		if (line[i] > max_height)
		{
			max_height = line[i];
			count++;
		}
		i++;
	}
	return (count);
}

int	check_column(int grid[4][4], int *views, int col)
{
	int	i;
	int	line[4];

	i = 0;
	while (i < 4)
	{
		line[i] = grid[i][col];
		i++;
	}
	if (count_visible(line) != views[col])
		return (0);
	i = 0;
	while (i < 4)
	{
		line[i] = grid[3 - i][col];
		i++;
	}
	if (count_visible(line) != views[col + 4])
		return (0);
	return (1);
}

int	check_row(int grid[4][4], int *views, int row)
{
	int	i;
	int	line[4];

	i = 0;
	while (i < 4)
	{
		line[i] = grid[row][i];
		i++;
	}
	if (count_visible(line) != views[row + 8])
		return (0);
	i = 0;
	while (i < 4)
	{
		line[i] = grid[row][3 - i];
		i++;
	}
	if (count_visible(line) != views[row + 12])
		return (0);
	return (1);
}

int	check_views(int grid[4][4], int views[16])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!check_column(grid, views, i))
			return (0);
		if (!check_row(grid, views, i))
			return (0);
		i++;
	}
	return (1);
}
