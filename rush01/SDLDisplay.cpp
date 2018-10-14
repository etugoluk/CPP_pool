#include "SDLDisplay.hpp"

SDLDisplay::SDLDisplay(std::vector<IMonitorModule *> & 	modules) : mod(modules), count(6)
{
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
		throw SDLDisplay::InitException();

	windows.push_back(SDL_CreateWindow("Date / Time", 100, 350, 400, 200, SDL_WINDOW_SHOWN));
	windows.push_back(SDL_CreateWindow("Hostname/Username", 100, 600, 400, 200, SDL_WINDOW_SHOWN));
	windows.push_back(SDL_CreateWindow("OS", 550, 350, 400, 200, SDL_WINDOW_SHOWN));
	windows.push_back(SDL_CreateWindow("CPU", 100, 100, 400, 200, SDL_WINDOW_SHOWN));
	windows.push_back(SDL_CreateWindow("RAM", 550, 600, 400, 200, SDL_WINDOW_SHOWN));
	windows.push_back(SDL_CreateWindow("Network", 100, 850, 400, 200, SDL_WINDOW_SHOWN));

	for (int i = 0; i < count; ++i) {
		surfaces.push_back(SDL_GetWindowSurface(windows[i]));
		SDL_memset(surfaces[i]->pixels, 0, surfaces[i]->h * surfaces[i]->pitch);
	}

	SDL_Color 	colors = {255, 255, 255, 255};
	color = colors;

	if (TTF_Init() != 0)
		throw SDLDisplay::TTFException();

	if (!(font = TTF_OpenFont("font/ARIAL.TTF", 25)))
		throw SDLDisplay::FontException();

}

SDLDisplay::~SDLDisplay() {
	TTF_CloseFont(font);
	TTF_Quit();

	for (int i = 0; i < count; ++i)
		SDL_DestroyWindow(windows[i]);
	SDL_Quit();
}

void SDLDisplay::printData(char const *data, SDL_Window *w, SDL_Surface *s)
{
	if (!(surface = TTF_RenderText_Blended(font, data, color)))
		throw SDLDisplay::SurfaceException();

	int texW = 0;
	int texH = 0;

	SDL_Rect rect = {0, 0, 350, 20};
	SDL_BlitSurface(surface, NULL, s, &rect);
	SDL_FreeSurface(surface);

	SDL_UpdateWindowSurface(w);
}

void SDLDisplay::show() {

	while (1) {
		if (SDL_PollEvent(&e))
		{
			if (e.window.event == SDL_WINDOWEVENT_CLOSE || (e.type == SDL_KEYDOWN &&
				(e.key.keysym.scancode == SDL_SCANCODE_ESCAPE || e.key.keysym.scancode == SDL_SCANCODE_Q
					|| e.key.keysym.scancode == SDLK_q)))
				return ;
		}
		for (int i = 0; i < count; ++i)
		{
			mod.at(i)->parseData();
			for (int k = 0; k < mod.at(i)->getData().size(); ++k)
				printData((mod.at(i)->getData())[k].c_str(), windows[i], surfaces[i]);
		}
	}
}

SDLDisplay::InitException::InitException() {}

SDLDisplay::InitException::~InitException() throw() {}

const char    *SDLDisplay::InitException::what() const throw() {
	return ("SDL_Init Error");
}


SDLDisplay::CreateWindowException::CreateWindowException() {}

SDLDisplay::CreateWindowException::~CreateWindowException() throw() {}

const char    *SDLDisplay::CreateWindowException::what() const throw() {
	return ("SDL_CreateWindow Error");
}


SDLDisplay::RendererException::RendererException() {}

SDLDisplay::RendererException::~RendererException() throw() {}

const char    *SDLDisplay::RendererException::what() const throw() {
	return ("SDL_CreateRenderer Error");
}


SDLDisplay::TTFException::TTFException() {}

SDLDisplay::TTFException::~TTFException() throw() {}

const char    *SDLDisplay::TTFException::what() const throw() {
	return ("TTF_Init Error");
}


SDLDisplay::FontException::FontException() {}

SDLDisplay::FontException::~FontException() throw() {}

const char    *SDLDisplay::FontException::what() const throw() {
	return ("TTF_OpenFont Error");
}


SDLDisplay::SurfaceException::SurfaceException() {}

SDLDisplay::SurfaceException::~SurfaceException() throw() {}

const char    *SDLDisplay::SurfaceException::what() const throw() {
	return ("TTF_RenderText_Solid Error");
}


SDLDisplay::TextureException::TextureException() {}

SDLDisplay::TextureException::~TextureException() throw() {}

const char    *SDLDisplay::TextureException::what() const throw() {
	return ("TextureException Error");
}
