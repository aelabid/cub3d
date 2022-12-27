/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_recs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelabid <aelabid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 12:25:22 by aelabid           #+#    #+#             */
/*   Updated: 2022/12/24 20:31:14 by aelabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"cub3d.h"

int render_colored_rect(t_rect rect)
{
	int	i;
	int j;

	if (mlx.win_ptr == NULL)
		return (1);
	i = rect.y;
	while (i < rect.y + rect.rec_size)
	{
		DDA(rect.x, i, rect.x + rect.rec_size - 1 , i);
		++i;
	}
	return (0);
}

int render_empty_rect(t_rect rect)
{
	if (mlx.win_ptr == NULL)
		return (1);
	DDA(rect.x, rect.y, rect.x + rect.rec_size, rect.y);
	DDA(rect.x, rect.y, rect.x, rect.y + rect.rec_size );
	DDA(rect.x , rect.y + rect.rec_size, rect.x + rect.rec_size, rect.y + rect.rec_size);
	DDA(rect.x + rect.rec_size, rect.y + rect.rec_size, rect.x + rect.rec_size, rect.y );
	return (0);
}