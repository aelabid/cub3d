/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rays.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelabid <aelabid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 18:33:24 by aelabid           #+#    #+#             */
/*   Updated: 2022/12/26 18:46:26 by aelabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"cub3d.h"

t_point    render_center_of_player()
{
    t_point center;

    center.x =  p.x ;
    center.y =  p.y ;
    my_mlx_pixel_put(center.x, center.y, RED_PIXEL);
    return (center);
}