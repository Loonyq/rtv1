#include "../include/rtv1.h"

int 	initSdl(t_main **data)
{
	SDL_Renderer *renderer;
	SDL_Event event;

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Couldn't initialize SDL: %s", SDL_GetError());
		return 3;
	}

	if (SDL_CreateWindowAndRenderer(320, 240, SDL_WINDOW_RESIZABLE, &(*data)->sdl.screen, &renderer)) {
		SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Couldn't create (*data ->sdl.screenand renderer: %s", SDL_GetError());
		return 3;
	}

//	surface = SDL_LoadBMP("sample.bmp");
//	if (!surface) {
//		SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Couldn't create surface from image: %s", SDL_GetError());
//		return 3;
//	}
//	texture = SDL_CreateTextureFromSurface(renderer, surface);
//	if (!texture) {
//		SDL_LogError(SDL_LOG_CATEGORY_APPLICATION, "Couldn't create texture from surface: %s", SDL_GetError());
//		return 3;
//	}
//	SDL_FreeSurface(surface);

	while (1) {
		SDL_PollEvent(&event);
		if (event.type == SDL_QUIT) {
			break;
		}
		SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0x00, 0x00);
		SDL_RenderClear(renderer);
//		SDL_RenderCopy(renderer, texture, NULL, NULL);
		SDL_RenderPresent(renderer);
	}

//	SDL_Delay(3000);
//	SDL_DestroyTexture(texture);
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow((*data)->sdl.screen);
	return (0);
}

void	sdlLoop(t_main **data)
{
	(void)data;
//	mlx_put_image_to_window((*data)->e.mlx, (*data)->e.win,
//							(*data)->e.img, 0, 0);
//	mlx_destroy_image((*data)->e.mlx, (*data)->e.img);
//	mlx_clear_window((*data)->e.mlx, (*data)->e.win);
//	mlx_loop((*data)->e.mlx);
}
