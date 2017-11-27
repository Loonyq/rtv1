#ifndef RTV1_RTV1_H
# define RTV1_RTV1_H

//#include "mlx.h"
#include "vec.h"
#include "../libft/libft.h"
#include "/Users/ilukaino/Library/Frameworks/SDL2.framework/Versions/A/Headers/SDL.h"

#define W 600
#define H 600

//MLX struct
typedef struct	s_sdl
{
	SDL_Window	*screen;
	void		*win;
	void		*img;
	int			w;
	int			h;
	char 		*renderImg;
	int			sizeline;
	int			bpp;
	int			endian;
}				t_sdl;


//Main data struct
typedef struct	s_main
{
	t_sdl 		sdl;
}				t_main;

//MLX
int 			initSdl(t_main **data);
void			sdlLoop(t_main **data);

//Render
void			colorPixel(t_main **data, int x, int y, int col);
void			raySender(t_main **data);

#endif
