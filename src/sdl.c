#include "../include/rtv1.h"

int 	initSdlSurface(t_main *data)
{
	SDL_Event event;

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Couldn't initialize SDL: %s", SDL_GetError());
		return 3;
	}

	if ((data->sdl.screen = SDL_CreateWindow("bob", 0, 0, W, H, SDL_WINDOW_RESIZABLE)) == NULL) {
		SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Couldn't create (*data ->sdl.screenand renderer: %s", SDL_GetError());
		return 3;
	}

	if ((data->sdl.data_sf = SDL_GetWindowSurface(data->sdl.screen)) == NULL)
	{
		SDL_Log("SDL_CreateRGBSurfaceWithFormat() failed: %s", SDL_GetError());
		exit(35);
	}
	while (1) {
		raySender(data);

		SDL_PollEvent(&event);
		if (event.type == SDL_QUIT) {
			break;
		}
////		SDL_RenderCopy(renderer, texture, NULL, NULL);
		SDL_UpdateWindowSurface(data->sdl.screen);
	}

	SDL_DestroyWindow(data->sdl.screen);
	return (0);
}

int 	initSdlRender(t_main *data)
{
	SDL_Event event;

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Couldn't initialize SDL: %s", SDL_GetError());
		return 3;
	}

	if (SDL_CreateWindowAndRenderer(W, H, SDL_WINDOW_RESIZABLE, &data->sdl.screen, &data->sdl.renderer)) {
		SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Couldn't create (*data ->sdl.screenand renderer: %s", SDL_GetError());
		return 3;
	}
	data->sdl.data_sf = SDL_CreateRGBSurface(0, W, H, 32, RMASK, GMASK, BMASK, AMASK);
	raySender(data);
	data->sdl.texture = SDL_CreateTextureFromSurface(data->sdl.renderer, data->sdl.data_sf);
//	SDL_LoadBMP("test.bmp");
//	SDL_RenderClear(data->sdl.renderer);
	while (1) {
		SDL_RenderCopy(data->sdl.renderer, data->sdl.texture, NULL, NULL);
		SDL_RenderPresent(data->sdl.renderer);
		SDL_RenderClear(data->sdl.renderer);
		SDL_PollEvent(&event);
		if (event.type == SDL_QUIT || event.key.keysym.sym == SDLK_ESCAPE)
			break;
		const Uint8 *state = SDL_GetKeyboardState(NULL);
		if (state[SDL_SCANCODE_LCTRL] && state[SDL_SCANCODE_LALT] && state[SDL_SCANCODE_DELETE])
			break ;
	}
	SDL_DestroyWindow(data->sdl.screen);
	return (0);
}