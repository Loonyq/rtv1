#include "../include/rtv1.h"

void			raySender(t_main **data)
{
	int 		i;
	int			j;
	t_vec		*vec;

	vec = (t_vec *)malloc(sizeof(t_vec));
	vec->initVec = initVec;
	vec->initVec(&vec, 5, 6, 7); //vec->initVec?
	i = 0;
	while (i < H)
	{
		j = 0;
		while (j < W)
		{
			colorPixel(data, j, i, 0xFFFFFF);
			j++;
		}
		i++;
	}
}

void			colorPixel(t_main **data, int x, int y, int col)
{
	int			byte;

	if (x >= (*data)->sdl.w - 10 || y >= (*data)->sdl.h - 10)
		return ;
	if (x <= 0 + 10 || y <= 0 + 10)
		return ;
	byte = (x * (*data)->sdl.bpp / 8) + (y * (*data)->sdl.sizeline);
	(*data)->sdl.renderImg[byte] = col;
	(*data)->sdl.renderImg[++byte] = col >> 8;
	(*data)->sdl.renderImg[++byte] = col >> 16;
}