/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelabid <aelabid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 12:38:18 by aelabid           #+#    #+#             */
/*   Updated: 2023/01/13 00:08:22 by aelabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"cub3d.h"

int render_map()
{
	int i;
	int j;
	int begY = 0;
	int begX = 0;

	i = 0;
	j = 0;
	while (matrix[i])
	{
		begX = 0;
		j = 0;
		while(matrix[i][j])
		{
			if (matrix[i][j] == '0')
				render_empty_rect((t_rect){begX, begY, REC_SIZE, WHITE_PIXEL});
			else if(matrix[i][j] == '1')
				render_colored_rect((t_rect){begX, begY, REC_SIZE, WHITE_PIXEL});
			begX += REC_SIZE;
			j++;
		}
		begY += REC_SIZE;
		i++;
	}
	return(0);
}
