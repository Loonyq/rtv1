#ifndef RTV1_RTV1_H
# define RTV1_RTV1_H

//#include "../libft/libft.h"
#include "/Users/ilukaino/Library/Frameworks/SDL2.framework/Versions/A/Headers/SDL.h"
#include <math.h>
#include "vec.h"
#include "ray.h"
#include "sphere.h"
#include "cam.h"

#define W 800
#define H 600

#if SDL_BYTEORDER == SDL_BIG_ENDIAN
	#define	RMASK 0xff000000
	#define	GMASK 0x00ff0000
	#define BMASK 0x0000ff00
	#define AMASK 0x000000ff
#else
	#define	RMASK 0x000000ff
	#define	GMASK 0x0000ff00
	#define BMASK 0x00ff0000
	#define AMASK 0xff000000
#endif

//MLX struct
typedef struct		s_sdl
{
	SDL_Window		*screen;
	SDL_Renderer	*renderer;
	SDL_Surface 	*data_sf;
	SDL_Texture 	*texture;
	SDL_Event 		event;
	int				w;
	int				h;
}					t_sdl;


//Main data struct
typedef struct		s_main
{
	t_sdl 			sdl;
}				t_main;

//SDL
int 			initSdlSurface(t_main *data);
int 			initSdlRender(t_main *data);

//Render
void			raySender(t_main *data);

#endif
