#include "SDLDisplay.hpp"

SDLDisplay::SDLDisplay(std::vector<IMonitorModule *> & 	modules) : mod(modules)
{
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
		throw SDLDisplay::InitException();

	windows.push_back(SDL_CreateWindow("Date / Time", 0, 50, 700, 180, SDL_WINDOW_SHOWN));
	windows.push_back(SDL_CreateWindow("Hostname/Username", 0, 250, 700, 180, SDL_WINDOW_SHOWN));
	windows.push_back(SDL_CreateWindow("OS", 0, 450, 700, 180, SDL_WINDOW_SHOWN));
	windows.push_back(SDL_CreateWindow("CPU", 0, 650, 700, 180, SDL_WINDOW_SHOWN));
	windows.push_back(SDL_CreateWindow("RAM", 0, 850, 700, 180, SDL_WINDOW_SHOWN));
	windows.push_back(SDL_CreateWindow("Network", 0, 1050, 700, 180, SDL_WINDOW_SHOWN));
	windows.push_back(SDL_CreateWindow("Storage", 0, 1250, 700, 180, SDL_WINDOW_SHOWN));
	windows.push_back(SDL_CreateWindow("Secret animal", 800, 250, 800, 800, SDL_WINDOW_SHOWN));

	for (int i = 0; i < static_cast<int>(windows.size()); ++i) {
		surfaces.push_back(SDL_GetWindowSurface(windows[i]));
		SDL_memset(surfaces[i]->pixels, 0, surfaces[i]->h * surfaces[i]->pitch);
	}

	images.push_back(SDL_LoadBMP("images/time.bmp"));
	images.push_back(SDL_LoadBMP("images/host.bmp"));
	images.push_back(SDL_LoadBMP("images/os.bmp"));
	images.push_back(SDL_LoadBMP("images/cpu.bmp"));
	images.push_back(SDL_LoadBMP("images/ram.bmp"));
	images.push_back(SDL_LoadBMP("images/network.bmp"));
	images.push_back(SDL_LoadBMP("images/storage.bmp"));
	images.push_back(SDL_LoadBMP("images/cat.bmp"));

	SDL_Color 	colors = {255, 255, 255, 255};
	color = colors;

	if (TTF_Init() != 0)
		throw SDLDisplay::TTFException();

	if (!(font = TTF_OpenFont("font/ARIAL.TTF", 18)))
		throw SDLDisplay::FontException();

}

SDLDisplay::~SDLDisplay() {
	TTF_CloseFont(font);
	TTF_Quit();

	for (int i = 0; i < static_cast<int>(windows.size()); ++i)
		SDL_DestroyWindow(windows[i]);
	SDL_Quit();
}

void SDLDisplay::printData(char const *data, SDL_Surface *s, SDL_Surface *img, int k)
{
	if (!(surface = TTF_RenderText_Solid(font, data, color)))
		throw SDLDisplay::SurfaceException();

	SDL_Rect recttext = {10, k * 25 + 60, 100, 10};
	SDL_BlitSurface(surface, NULL, s, &recttext);

	SDL_Rect rectimg = {520, 0, 700, 180};
	SDL_BlitSurface(img, NULL, s, &rectimg);

	SDL_FreeSurface(surface);
}

void SDLDisplay::printCat(SDL_Surface *s, SDL_Surface *img)
{
	int h = 800;
	int w = 800;

	while (h >= 620 || w >= 620)
	{
		h = rand() % 800;
		w = rand() % 800;
	}

	SDL_Rect rectimg = {h, w, h + 180, w + 180};
	SDL_BlitSurface(img, NULL, s, &rectimg);
}

void SDLDisplay::show() {

	while (1) {
		for (int i = 0; i < static_cast<int>(windows.size()); ++i)
		{
			if (SDL_PollEvent(&e))
			{
				if (e.window.event == SDL_WINDOWEVENT_CLOSE || (e.type == SDL_KEYDOWN &&
					(e.key.keysym.scancode == SDL_SCANCODE_ESCAPE || e.key.keysym.scancode == SDL_SCANCODE_Q
						|| e.key.keysym.scancode == SDLK_q)))
					return ;
			}
			if (!strcmp(SDL_GetWindowTitle(windows[i]),"Secret animal"))
				printCat(surfaces[i], images[i]);
			else {
				mod.at(i)->parseData();
				for ( int k = 0; k < static_cast<int>(mod.at(i)->getData().size()); ++k)
					printData((mod.at(i)->getData())[k].c_str(), surfaces[i], images[i], k);
			}
			SDL_FreeSurface(surfaces[i]);
			SDL_UpdateWindowSurface(windows[i]);
			SDL_memset(surfaces[i]->pixels, 0, surfaces[i]->h * surfaces[i]->pitch);
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
