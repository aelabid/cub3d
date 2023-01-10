/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_mlx_put.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelabid <aelabid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 12:33:58 by aelabid           #+#    #+#             */
/*   Updated: 2023/01/09 21:01:56 by aelabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"cub3d.h"

void	my_mlx_pixel_put(int x, int y, int color)
{
	
	char	*dst;
	// if(x<0)
	// 	x=0;
	// if(y<0)
	// 	y=0;
	// if(x>=win.win_w)
	// 	x=win.win_w;
	// if(y>=win.win_h)
	// 	y=win.win_h;
	if (x>0 && x<win.win_w && y>0 && y<win.win_h)
	{
		dst = img.addr + (y * img.line_length + x * (img.bits_per_pixel / 8));
		*(unsigned int*)dst = color;
	}
}
