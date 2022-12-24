/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelabid <aelabid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 12:38:18 by aelabid           #+#    #+#             */
/*   Updated: 2022/12/24 15:33:35 by aelabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"cub3d.h"

int render_map(t_iso **matrix, t_winSizes win)
{
	int i;
	int j;
	int begY = 0;
	int begX = 0;

	i = 0;
	j = 0;
	while (i < win.nb_row)
	{
		begX = 0;
		j = 0;
		while(j < win.nb_col)
		{
			if (matrix[i][j].height == 0)
				render_empty_rect((t_rect){begX, begY, REC_SIZE, WHITE_PIXEL});
			else
				render_colored_rect((t_rect){begX, begY, REC_SIZE, WHITE_PIXEL});
				
			begX += REC_SIZE;
			j++;
		}
		begY += REC_SIZE;
		i++;
	}
	return(0);
}
