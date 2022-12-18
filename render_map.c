/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelabid <aelabid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 12:38:18 by aelabid           #+#    #+#             */
/*   Updated: 2022/12/18 15:37:48 by aelabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"cub3d.h"

int render_map(t_mlx *data, t_img *img, t_iso **matrix, int nbr, int nbc)
{
	int i;
	int j;
	int begY = 0;
	int begX = 0;

	i = 0;
	j = 0;
	while (i < nbr)
	{
		begX = 0;
		j = 0;
		while(j < nbc)
		{
			if (matrix[i][j].height == 0)
				render_empty_rect(data, img, (t_rect){begX, begY, REC_SIZE, WHITE_PIXEL});
			else
				render_colored_rect(data, img, (t_rect){begX, begY, REC_SIZE, WHITE_PIXEL});
				
			begX += REC_SIZE;
			j++;
		}
		begY += REC_SIZE;
		i++;
	}
	return(0);
}
