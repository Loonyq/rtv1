#ifndef RTV1_CAM_H
# define RTV1_CAM_H

#include "rtv1.h"

typedef struct		s_cam
{
	t_ray			*ray;
}					t_cam;

t_cam		*initCam(t_vec *o, t_vec *d);

#endif
