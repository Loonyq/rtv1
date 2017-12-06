#include "../include/rtv1.h"


t_cam		*initCam(t_vec *o, t_vec *d)
{
	t_cam	*cam;

	cam = (t_cam *)malloc(sizeof(t_cam));
	cam->ray->origin = o;
	cam->ray->direction = d;
	return (cam);
}