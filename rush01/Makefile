NAME = ft_gkrellm
CC = clang++
FLAGS = -Wall -Wextra -Werror
OBJ = $(SRCS:.cpp=.o)

SRCS = main.cpp \
		$(CLASS_HEAD:.hpp=.cpp)

CLASS_HEAD =	CPUModule.hpp \
				DateTimeModule.hpp \
				HostnameModule.hpp \
				NetworkModule.hpp \
				OSModule.hpp \
				RAMModule.hpp \
				ShellDisplay.hpp \
				SDLDisplay.hpp \
				StorageModule.hpp \
				ZazModule.hpp

HEAD =	IMonitorDisplay.hpp \
		IMonitorModule.hpp

INCLUDES =	-I./frameworks/SDL2.framework/Versions/A/Headers \
				-I./frameworks/SDL2_ttf.framework/Versions/A/Headers \
				-I./frameworks/SDL2_image.framework/Versions/A/Headers \
				-I./frameworks/SDL2_mixer.framework/Headers \
				-F./frameworks/
				
FRAMEWORKS =	-F./frameworks \
				-rpath ./frameworks \
				-framework OpenGL -framework AppKit -framework OpenCl \
				-framework SDL2 -framework SDL2_ttf -framework SDL2_image \
				-framework SDL2_mixer
NCURSES = -lncurses

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME) $(NCURSES) $(FRAMEWORKS)

%.o: %.cpp $(CLASS_HEAD) $(HEAD)
	$(CC) $(FLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re