#include "../include/vec.h"

void	initVec(t_vec **vec, double a, double b, double c)
{
	(*vec)->x = a;
	(*vec)->y = b;
	(*vec)->z = c;
}
