#include "../include/rtv1.h"

void clamp255(SDL_Color *col) {
	col->r = (col->r > 255) ? 255 : (col->r < 0) ? 0 : col->r;
	col->g = (col->g > 255) ? 255 : (col->g < 0) ? 0 : col->g;
	col->b = (col->b > 255) ? 255 : (col->b < 0) ? 0 : col->b;
}

void			raySender(t_main *data)
{
	int 		y;
	int			x;

	t_sphere *sphere;
	t_sphere *light;
	t_color white;
	t_color red;
	t_color black;
	t_color pixelCol;

	white = initColor(255,255,255);
	red = initColor(255,0,0);
	black = initColor(0,0,0);
//	sphere = NULL;
	sphere = initSphere(initVec(W/2, H/2, 50), 150);
	light = initSphere(initVec(0, 400, -50), 1);
//	SDL_Color w;
//	w.r = 255;
//	w.g = 255;
//	w.b = 255;
//	w.a = 255;
//	SDL_Color r;
//	r.r = 255;
//	r.g = 0;
//	r.b = 0;
//	r.a = 255;
//	SDL_Color b;
//	r.r = 0;
//	r.g = 0;
//	r.b = 0;
//	r.a = 255;
//	SDL_Color *p;
//	p = (SDL_Color *)malloc(sizeof(SDL_Color));
	Uint32 *pixel;
	double t;
	y = 0;
	while (y < H)
	{
//		p = &b;
		x = 0;
		while (x < W)
		{
			pixelCol = black;
			t_ray *ray;
			ray = initRay(initVec(x, y, 0), initVec(0, 0, 1));
			t = 20000;
			if (intersectSphere(sphere, ray, &t) == 1)
			{
				t_vec *pi;
				pi = initVec((ray->origin->x + ray->direction->x * t), (ray->origin->y + ray->direction->y * t), (ray->origin->z + ray->direction->z * t));
				t_vec *L = subtractionVec(light->center, pi);
				t_vec *N = getNormal(pi, sphere);
				normalize(L);
				normalize(N);
				const double dt = dot(L, N);
				pixelCol.r = (white.r + white.r * dt) * 0.5;
				pixelCol.g = (white.g + white.g * dt) * 0.5;
				pixelCol.b = (white.b + white.b * dt) * 0.5;
//				clamp255(p);
			}
			pixel = (Uint32 *)data->sdl.data_sf->pixels + y * data->sdl.data_sf->pitch / data->sdl.data_sf->format->BytesPerPixel + x;
			*pixel = SDL_MapRGBA(data->sdl.data_sf->format, pixelCol.r,  pixelCol.g,  pixelCol.b, 255);
//			else
//			{
//				pixel = (Uint32 *)data->sdl.data_sf->pixels + x * data->sdl.data_sf->pitch / data->sdl.data_sf->format->BytesPerPixel + y;
//				*pixel = SDL_MapRGBA(data->sdl.data_sf->format, b.r,  b.g,  b.b, b.a);
//			}
			x++;
		}
		y++;
	}
}
