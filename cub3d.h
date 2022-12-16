/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelabid <aelabid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 07:14:53 by aelabid           #+#    #+#             */
/*   Updated: 2022/12/16 07:30:10 by aelabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H
# include"mlx.h"
# include<stdlib.h>
# include<math.h>
# include<stdio.h>

typedef struct s_mlx
{
	void	*img;
	void	*mlx_ptr;
	void	*win_ptr;
}	t_mlx;

typedef struct	s_img {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}	t_img;
#endif