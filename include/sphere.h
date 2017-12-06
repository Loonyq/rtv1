#ifndef RTV1_SPHERE_H
# define RTV1_SPHERE_H

#include "rtv1.h"

typedef struct	s_sphere
{
	t_vec		*center;
	double 		radius;
}				t_sphere;

t_sphere		*initSphere(t_vec *i, double r);
int 			intersectSphere(t_sphere *sphere, t_ray *ray, double *t);
t_vec 			*getNormal(const t_vec *pi, t_sphere *sphere);
#endif
