#include <stdlib.h>
#include "../include/rtv1.h"

int main() {
	t_main 	*data;

	data = (t_main *)malloc(sizeof(t_main));

	initSdl(&data);
//	raySender(&data);
//	sdlLoop(&data);
	SDL_Quit();
	return 0;
}