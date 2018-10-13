#ifndef SDLDISPLAY_HPP
#define SDLDISPLAY_HPP

#include "IMonitorDisplay.hpp"

#include "IMonitorModule.hpp"
#include "CPUModule.hpp"

# include <SDL2/SDL.h>
# include <OpenCL/opencl.h>
# include "SDL_image.h"
# include "SDL_mixer.h"
# include "SDL_ttf.h"

class SDLDisplay : public IMonitorDisplay
{
	SDL_Window	*CPUWindow;
	SDL_Window	*DateWindow;
	SDL_Window	*HostWindow;
	SDL_Window	*NetworkWindow;
	SDL_Window	*OSWindow;
	SDL_Window	*RAMWindow;

	SDL_Renderer *CPURenderer;
	SDL_Renderer *DateRenderer;
	SDL_Renderer *HostRenderer;
	SDL_Renderer *NetworkRenderer;
	SDL_Renderer *OSRenderer;
	SDL_Renderer *RAMRenderer;

	TTF_Font *font;
	SDL_Surface *surface;
	SDL_Texture *texture;
	SDL_Event	e;

	SDLDisplay();
	SDLDisplay(SDLDisplay const &sdl);
	SDLDisplay & operator=(SDLDisplay const &sdl);

	std::vector<IMonitorModule *> &	mod;	
	
public:
	SDLDisplay(std::vector<IMonitorModule *> & 	modules);
	~SDLDisplay();

	void show();

	class InitException :public std::exception {
	public:
		InitException();
		~InitException() throw ();
		InitException(SDLDisplay::InitException const & g);
		SDLDisplay::InitException & operator=(SDLDisplay::InitException const & g);

		virtual const char    *what() const throw();
	};

	class CreateWindowException :public std::exception {
	public:
		CreateWindowException();
		~CreateWindowException() throw ();
		CreateWindowException(SDLDisplay::CreateWindowException const & g);
		SDLDisplay::CreateWindowException & operator=(SDLDisplay::CreateWindowException const & g);

		virtual const char    *what() const throw();
	};

	class RendererException :public std::exception {
	public:
		RendererException();
		~RendererException() throw ();
		RendererException(SDLDisplay::RendererException const & g);
		SDLDisplay::RendererException & operator=(SDLDisplay::RendererException const & g);

		virtual const char    *what() const throw();
	};

	class TTFException :public std::exception {
	public:
		TTFException();
		~TTFException() throw ();
		TTFException(SDLDisplay::TTFException const & g);
		SDLDisplay::TTFException & operator=(SDLDisplay::TTFException const & g);

		virtual const char    *what() const throw();
	};

	class FontException :public std::exception {
	public:
		FontException();
		~FontException() throw ();
		FontException(SDLDisplay::FontException const & g);
		SDLDisplay::FontException & operator=(SDLDisplay::FontException const & g);

		virtual const char    *what() const throw();
	};

	class SurfaceException :public std::exception {
	public:
		SurfaceException();
		~SurfaceException() throw ();
		SurfaceException(SDLDisplay::SurfaceException const & g);
		SDLDisplay::SurfaceException & operator=(SDLDisplay::SurfaceException const & g);

		virtual const char    *what() const throw();
	};

	class TextureException :public std::exception {
	public:
		TextureException();
		~TextureException() throw ();
		TextureException(SDLDisplay::TextureException const & g);
		SDLDisplay::TextureException & operator=(SDLDisplay::TextureException const & g);

		virtual const char    *what() const throw();
	};
};

#endif