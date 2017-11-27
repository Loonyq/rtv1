#ifndef RTV1_VEC_H
# define RTV1_VEC_H

typedef struct	s_vec
{
	double 		x;
	double 		y;
	double 		z;
	void		(*initVec)(struct s_vec**, double, double, double);
}				t_vec;

void			initVec(t_vec **vec, double a, double b, double c);

#endif
