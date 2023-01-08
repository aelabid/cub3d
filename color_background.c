/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_background.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelabid <aelabid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 00:00:21 by aelabid           #+#    #+#             */
/*   Updated: 2023/01/07 00:15:28 by aelabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"cub3d.h"

void    color_background()
{
    int i=0;
    while(i < win.win_h / 2)
    {
        DDA(0, i, win.win_w,i, RED_PIXEL);
        i++;
    }
    while(i < win.win_h)
    {
        DDA(0, i, win.win_w,i, GREEN_PIXEL);
        i++;
    }
}