#include "../include/rtv1.h"

t_sphere		*initSphere(t_vec *i, double r)
{
	t_sphere	*sphere;

	sphere = (t_sphere *)malloc(sizeof(t_sphere));
	sphere->center = i;
	sphere->radius = r;
	return sphere;
}

int 			intersectSphere(t_sphere *sphere, t_ray *ray, double *t)
{
	t_vec	*o;
	t_vec	*d;
	t_vec	*oc;
	double 	b;
	double 	c;
	double 	disc;

	o = ray->origin;
	d = ray->direction;
	oc = subtractionVec(o, sphere->center);
	b = 2 * dot(oc, d);
	c = dot(oc, oc) - sphere->radius * sphere->radius;
	disc = b * b - 4 * c;
	if (disc < 0)
		return 0;
	else
	{
		disc = sqrt(disc);
		double t0 = -b - disc;
		double t1 = -b + disc;

		*t = (t0 < t1) ? t0 : t1;
		return 1;
	}
}

t_vec 			*getNormal(const t_vec *pi, t_sphere *sphere)
{
	t_vec *normal;

	normal = (t_vec *)malloc(sizeof(t_vec));
	normal->x = (pi->x - sphere->center->x) / sphere->radius;
	normal->y = (pi->y - sphere->center->y) / sphere->radius;
	normal->z = (pi->z - sphere->center->z) / sphere->radius;
	return normal;
}