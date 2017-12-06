#include "../include/rtv1.h"

t_vec	*initVec(double a, double b, double c)
{
	t_vec 	*vec;

	vec = (t_vec *)malloc(sizeof(t_vec));
	vec->x = a;
	vec->y = b;
	vec->z = c;
	return vec;
}

t_vec	*subtractionVec(t_vec *a, t_vec *b)
{
	t_vec	*result;

	result = (t_vec *)malloc(sizeof(t_vec));
	result->x = a->x - b->x;
	result->y = a->y - b->y;
	result->z = a->z - b->z;
	return result;
}

t_vec	*additionVec(t_vec *a, t_vec *b)
{
	t_vec	*result;

	result = (t_vec *)malloc(sizeof(t_vec));
	result->x = a->x + b->x;
	result->y = a->y + b->y;
	result->z = a->z + b->z;
	return result;
}

double	dot(t_vec *a, t_vec *b)
{
	double	dot;

	dot = (a->x * b->x) + (a->y * b->y) + (a->z * b->z);
	return dot;
}

void 	normalize(t_vec *vec)
{
	double mg = sqrt(vec->x * vec->x + vec->y * vec->y + vec->z * vec->z);
	vec->x /= mg;
	vec->y /= mg;
	vec->z /= mg;
}