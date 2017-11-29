#include "../include/rtv1.h"

void			raySender(t_main *data)
{
	int 		y;
	int			x;
	t_cam		cam;

	cam.ray.origin.x = 0;
	cam.ray.origin.y = 0;
	cam.ray.origin.z = -1000;
	cam.ray.direction.x = 0;
	cam.ray.direction.y = 0;
	cam.ray.direction.z = 1;
	y = H / 2;
	SDL_Color n;
	n.r = 255;
	n.g = 255;
	n.b = 255;
	n.a = 255;
	Uint32 *pixel;
	while (y < H)
	{
		x = W / 2;
		while (x < W)
		{
			t_ray ray;
			initRay(ray, )
			pixel = (Uint32 *)data->sdl.data_sf->pixels + x * data->sdl.data_sf->pitch / data->sdl.data_sf->format->BytesPerPixel + x;
			*pixel = SDL_MapRGBA(data->sdl.data_sf->format, n.r, n.g, n.b, n.a);
			x++;
		}
		y++;
	}
}
