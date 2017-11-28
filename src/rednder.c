#include "../include/rtv1.h"

void			raySender(t_main *data)
{
	int 		i;
	int			j;

	i = 0;
	SDL_Color n;
	n.r = 255;
	n.g = 255;
	n.b = 255;
	n.a = 255;
	Uint32 *pixel;
	while (i < H)
	{
		j = 0;
		while (j < W)
		{
			pixel = (Uint32 *)data->sdl.data_sf->pixels + i * data->sdl.data_sf->pitch / data->sdl.data_sf->format->BytesPerPixel + j;
			*pixel = SDL_MapRGBA(data->sdl.data_sf->format, n.r, n.g, n.b, n.a);
			j++;
		}
		i++;
	}
}
