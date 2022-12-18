/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utiles_for_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelabid <aelabid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 12:23:34 by aelabid           #+#    #+#             */
/*   Updated: 2022/12/18 15:22:08 by aelabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"cub3d.h"

int get_rows(int fd)
{
    int nbrow;
    
	numberofrows(fd, &nbrow);
    return(nbrow);
}

int	number_col_matx(t_iso *mat)
{
	int	i;

	i = 0;
	while (mat[i].color != -1)
		i++;
	return (i);
}

int	openfd(char *ac)
{
	int	fd;

	fd = open(ac, O_RDWR);
	return (fd);
}

t_iso	**get_sizes_matrix(char *path, int *nb_row, int *nb_col)
{
	t_iso	**matrix;

	*nb_row = get_rows(openfd(path));
	matrix = create_matrix(*nb_row, openfd(path));
	*nb_col = number_col_matx(matrix[0]);
	return(matrix);
}