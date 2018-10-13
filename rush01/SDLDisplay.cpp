#include "SDLDisplay.hpp"

SDLDisplay::SDLDisplay(std::vector<IMonitorModule *> & 	modules) : mod(modules)
{
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
		throw SDLDisplay::InitException();
	if (!(CPUWindow = SDL_CreateWindow("CPU", 100, 100, 400, 200, SDL_WINDOW_SHOWN)))
		throw SDLDisplay::CreateWindowException();
	if (!(DateWindow = SDL_CreateWindow("Date / Time", 100, 350, 400, 200, SDL_WINDOW_SHOWN)))
		throw SDLDisplay::CreateWindowException();
	if (!(HostWindow = SDL_CreateWindow("Hostname/Username", 100, 600, 400, 200, SDL_WINDOW_SHOWN)))
		throw SDLDisplay::CreateWindowException();
	if (!(NetworkWindow = SDL_CreateWindow("Network", 100, 850, 400, 200, SDL_WINDOW_SHOWN)))
		throw SDLDisplay::CreateWindowException();
	if (!(OSWindow = SDL_CreateWindow("OS", 550, 350, 400, 200, SDL_WINDOW_SHOWN)))
		throw SDLDisplay::CreateWindowException();
	if (!(RAMWindow = SDL_CreateWindow("RAM", 550, 600, 400, 200, SDL_WINDOW_SHOWN)))
		throw SDLDisplay::CreateWindowException();

	if (!(CPURenderer = SDL_CreateRenderer(CPUWindow, -1, 0)))
		throw SDLDisplay::RendererException();
	if (!(DateRenderer = SDL_CreateRenderer(DateWindow, -1, 0)))
		throw SDLDisplay::RendererException();
	if (!(HostRenderer = SDL_CreateRenderer(HostWindow, -1, 0)))
		throw SDLDisplay::RendererException();
	if (!(NetworkRenderer = SDL_CreateRenderer(NetworkWindow, -1, 0)))
		throw SDLDisplay::RendererException();
	if (!(OSRenderer = SDL_CreateRenderer(OSWindow, -1, 0)))
		throw SDLDisplay::RendererException();
	if (!(RAMRenderer = SDL_CreateRenderer(RAMWindow, -1, 0)))
		throw SDLDisplay::RendererException();

}

SDLDisplay::~SDLDisplay() {
	SDL_DestroyTexture(texture);
	SDL_FreeSurface(surface);
	TTF_CloseFont(font);
	TTF_Quit();
	SDL_DestroyWindow(CPUWindow);
	SDL_DestroyWindow(DateWindow);
	SDL_DestroyWindow(HostWindow);
	SDL_DestroyWindow(NetworkWindow);
	SDL_DestroyWindow(OSWindow);
	SDL_DestroyWindow(RAMWindow);
	SDL_Quit();
}

void SDLDisplay::show() {

	if (TTF_Init() != 0)
		throw SDLDisplay::TTFException();

	if (!(font = TTF_OpenFont("font/ARIAL.TTF", 25)))
		throw SDLDisplay::FontException();

	SDL_Color color = {255, 255, 255, 255};

	if (!(surface = TTF_RenderText_Solid(font, "Not copypast!", color)))
		throw SDLDisplay::SurfaceException();

	if (!(texture = SDL_CreateTextureFromSurface(CPURenderer, surface)))
		throw SDLDisplay::TextureException();
	
	int texW = 0;
	int texH = 0;
	SDL_QueryTexture(texture, NULL, NULL, &texW, &texH);
	SDL_Rect dstrect = {0, 0, 350, 20};
	SDL_RenderCopy(CPURenderer, texture, NULL, &dstrect);

	while (1) {
		if (SDL_PollEvent(&e))
		{
			if (e.window.event == SDL_WINDOWEVENT_CLOSE || (e.type == SDL_KEYDOWN &&
				(e.key.keysym.scancode == SDL_SCANCODE_ESCAPE || e.key.keysym.scancode == SDL_SCANCODE_Q
					|| e.key.keysym.scancode == SDLK_q)))
			{
				return ;
			}

			std::vector<IMonitorModule *>::iterator		ibeg = mod.begin();
			std::vector<IMonitorModule *>::iterator		iend = mod.end();
			for (std::vector<IMonitorModule *>::iterator i = ibeg; i != iend; ++i)
			{
				// updating data
				(*i)->parseData();
				// printing data
				for (int k = 0; k < (*i)->getData().size(); ++k)
				{
					//	CPU data to cout
					if (!(surface = TTF_RenderText_Solid(font, ((*i)->getData())[k].c_str() , color)))
						throw SDLDisplay::SurfaceException();
					if (!(texture = SDL_CreateTextureFromSurface(CPURenderer, surface)))
						throw SDLDisplay::TextureException();
					// std::cout << ((*i)->getData())[k].c_str() << std::endl;
				}
			}
				// std::cout << "---" << i++ << std::endl;
			// SDL_UpdateWindowSurface(CPUWindow);

		}
		SDL_RenderClear(CPURenderer);
		SDL_RenderCopy(CPURenderer, texture, NULL, &dstrect);
		SDL_RenderPresent(CPURenderer);

		// SDL_UpdateWindowSurface(CPUWindow);
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
