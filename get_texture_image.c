/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_texture_image.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelabid <aelabid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 13:27:32 by aelabid           #+#    #+#             */
/*   Updated: 2023/01/08 13:38:29 by aelabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"cub3d.h"

void    get_images()
{
    texture[0].img = mlx_xpm_file_to_image(mlx.mlx_ptr, texture[0].path, &texture[0].width, &texture[0].height);
    texture[1].img = mlx_xpm_file_to_image(mlx.mlx_ptr, texture[1].path, &texture[1].width, &texture[1].height);
    texture[2].img = mlx_xpm_file_to_image(mlx.mlx_ptr, texture[2].path, &texture[2].width, &texture[2].height);
    texture[3].img = mlx_xpm_file_to_image(mlx.mlx_ptr, texture[3].path, &texture[3].width, &texture[3].height);
}