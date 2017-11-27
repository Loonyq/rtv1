#ifndef RTV1_RAY_H
# define RTV1_RAY_H

#include "vec.h"

typedef struct	s_ray
{
	t_vec		origin;
	t_vec		direction;
}				t_ray;

void			initRay(t_ray **ray, t_vec i, t_vec j);

#endif
