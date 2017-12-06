#ifndef RTV1_RAY_H
# define RTV1_RAY_H

#include "rtv1.h"

typedef struct	s_ray
{
	t_vec		*origin;
	t_vec		*direction;
}				t_ray;

t_ray			*initRay(t_vec *i, t_vec *j);

#endif
