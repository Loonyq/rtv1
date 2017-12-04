#include "../include/rtv1.h"

void			raySender(t_main *data)
{
	int 		y;
	int			x;
	t_cam		cam;

	t_sphere sphere(initVec(W*0.5, H*0.5, 50), 50);
	t_sphere light(initVec(0, 0, 50), 1);
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
	double t;
	while (y < H)
	{
		x = W / 2;
		while (x < W)
		{
			t_vec vec1;
			t_vec vec2;
			t_ray ray;
			ray = initRay(initVec(x, y, 0), initVec(0, 0, 1));
			if (intersectSphere(&sphere, &ray, &t))
			{
				const t_vec pi = (t_vec){ray.origin.x + ray.direction.x * t, ray.origin.y + ray.direction.y * t, ray.origin.z + ray.direction.z * t};
				const t_vec L = subtractionVec(light.center, pi);
				const t_vec N = getNormal(&pi, sphere);
				const double dt = dot(normalize(L), normalize(N));
			}
			pixel = (Uint32 *)data->sdl.data_sf->pixels + x * data->sdl.data_sf->pitch / data->sdl.data_sf->format->BytesPerPixel + x;
			*pixel = SDL_MapRGBA(data->sdl.data_sf->format, n.r, n.g, n.b, n.a);
			x++;
		}
		y++;
	}
}
