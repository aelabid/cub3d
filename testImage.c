#include"cub3d.h"

int main()
{
    int height;
    int width;
    void *myimage;
    int *addr;
    unsigned int*  col;
    mlx.mlx_ptr = mlx_init();
	mlx.win_ptr = mlx_new_window(mlx.mlx_ptr, 500, 500, "CUB3D");
    myimage = mlx_xpm_file_to_image(mlx.mlx_ptr, "./test.xpm", &width, &height);
    mlx.img = mlx_new_image(mlx.mlx_ptr, 500, 500);
    addr = (int *)mlx_get_data_addr(myimage, &img.bits_per_pixel, &img.line_length,
								&img.endian);
    img.addr = mlx_get_data_addr(mlx.img, &img.bits_per_pixel, &img.line_length,
								&img.endian);
    
    // int i =0;
    // while (i< 284)
    // {

    //     my_mlx_pixel_put(i,5, col[284*2+i]);
    //     i++;
    // }
    // my_mlx_pixel_put(10,11, col[1]);
    // my_mlx_pixel_put(10,12, col[1]);
    // my_mlx_pixel_put(10,13, col[1]);
    // printf("%c\n",img.addr[0]);
    // printf("w %d h%d\n", col[1]);
    for (int i = 0; i < 500;i++)
    {
        // for (int j = 0; j < width; i++)
        // {
            my_mlx_pixel_put(i, 5, addr[i]);
        // }
    }
    mlx_put_image_to_window(mlx.mlx_ptr, mlx.win_ptr, mlx.img, 0, 0);
    mlx_loop(mlx.mlx_ptr);
}

// #include <mlx.h>

// typedef struct	s_data {
// 	void	*img;
// 	int	    *addr;
//     int     height;
//     int     width;
// 	int		bits_per_pixel;
// 	int		line_length;
// 	int		endian;
// }				t_data;

// void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
// {
// 	int	*dst;

// 	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
// 	*(unsigned int*)dst = color;
// }

// int	main(void)
// {
// 	void	*mlx;
// 	void	*mlx_win;
// 	t_data	img;

// 	mlx = mlx_init();
// 	mlx_win = mlx_new_window(mlx, 284, 177, "Hello world!");
//     img.img = mlx_xpm_file_to_image(mlx, "./background.xpm", &img.width, &img.height);
// 	img.addr = (int *)mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,
// 								&img.endian);
//     int index = 0;
//     for (int i = 0; i < 177; i++)
//     {
//         for (int j = 0; j < 284; j++)
//         {
//             my_mlx_pixel_put(&img, j, i, img.addr[index]);
//             index++;
//         }
//     }
// 	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
// 	mlx_loop(mlx);
// }