#ifndef RTV1_VEC_H
# define RTV1_VEC_H

#include "rtv1.h"

typedef struct	s_vec
{
	double 		x;
	double 		y;
	double 		z;
//	void		(*initVec)(struct s_vec**, double, double, double);
}				t_vec;

t_vec			*initVec(double a, double b, double c);
t_vec			*subtractionVec(t_vec *a, t_vec *b);
t_vec			*additionVec(t_vec *a, t_vec *b);
double			dot(t_vec *a, t_vec *b);
void 			normalize(t_vec *vec);

#endif
