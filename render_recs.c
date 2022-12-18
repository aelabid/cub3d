/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_recs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelabid <aelabid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 12:25:22 by aelabid           #+#    #+#             */
/*   Updated: 2022/12/18 12:26:05 by aelabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"cub3d.h"

int render_colored_rect(t_mlx *data, t_img *img, t_rect rect)
{
	int	i;
	int j;

	if (data->win_ptr == NULL)
		return (1);
	i = rect.y;
	while (i < rect.y + rect.rec_size)
	{
		j = rect.x;
		while (j < rect.x + rect.rec_size)
				my_mlx_pixel_put(img, j++, i, rect.color);
		++i;
	}
	return (0);
}

int render_empty_rect(t_mlx *data, t_img *img, t_rect rect)
{
	int	i;
	int j;

	if (data->win_ptr == NULL)
		return (1);
	i = rect.y;
	while (i < rect.y + rect.rec_size)
	{
		j = rect.x;
		while (j < rect.x + rect.rec_size)
		{
			if (i == 0 || i+1 == rect.y + rect.rec_size || j == 0 || j+1 == rect.x + rect.rec_size)
				my_mlx_pixel_put(img, j, i, rect.color);
			j++;
		}
		++i;
	}
	return (0);
}