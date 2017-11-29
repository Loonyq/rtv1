#include "../include/rtv1.h"

void			initRay(t_ray *ray, t_vec i, t_vec j)
{
	ray->origin = i;
	ray->direction = j;
}
