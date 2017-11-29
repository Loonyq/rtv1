#include "../include/rtv1.h"

void	initVec(t_vec *vec, double a, double b, double c)
{
	vec->x = a;
	vec->y = b;
	vec->z = c;
}

t_vec	subtractionVec(t_vec a, t_vec b)
{
	t_vec	result;

	result.x = a.x - b.x;
	result.y = a.y - b.y;
	result.z = a.z - b.z;
	return result;
}

t_vec	additionVec(t_vec a, t_vec b)
{
	t_vec	result;

	result.x = a.x + b.x;
	result.y = a.y + b.y;
	result.z = a.z + b.z;
	return result;
}

double	dot(t_vec a, t_vec b)
{
	double	dot;

	dot = (a.x * b.x) + (a.y * b.y) + (a.z * b.z);
	return dot;
}

