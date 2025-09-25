CPP = c++

CFLAGS  = -Wall -Wextra -Werror -std=c++98

NAME = megaphone

SRC_DIR = ex00

SRCS =	$(shell find -name '*.cpp')

OBJ_DIR = build

OBJS =	$(SRCS:%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CPP) $(CFLAGS) $(OBJS) -o $@

$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	@$(CPP) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ_DIR)/*.o
	
fclean: clean
	@rm -f $(NAME)

re:
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY: all clean fclean re