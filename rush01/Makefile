NAME = ft_gkrellm

SRCS = main.cpp \
		CPUModule.cpp \
		DateTimeModule.cpp \
		HostnameModule.cpp \
		NetworkModule.cpp \
		OSModule.cpp \
		RAMModule.cpp \
		ShellDisplay.cpp \
		SDLDisplay.cpp \
		StorageModule.cpp

# INC = -I ./inc/ -I ./SDL/SDL2.framework/Headers\
# -I ./SDL/SDL2_image.framework/Headers\
# -I ./SDL/SDL2_ttf.framework/Headers

OBJ = $(SRCS:.cpp=.o)

CFLAGS = 

# FRM = -F ./SDL/ -framework SDL2 -framework SDL2_image -framework SDL2_ttf -framework OpenCL

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


all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(CFLAGS) $(OBJ) -o $(NAME) -lncurses $(FRAMEWORKS)
	# clang++ $(CFLAGS) $(OBJ) -o $(NAME) $(INC) $(FRM)

%.o: %.cpp
	clang++ $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re