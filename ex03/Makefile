

NAME 		= insane_violence

CC			= c++

CFLAGS		= -Wall -Wextra -Werror -std=c++98

INCLUDES	=  Weapon.hpp HumanA.hpp HumanB.hpp

FILES		= Weapon HumanA HumanB main

SRCS		= $(addsuffix .cpp, $(FILES))

OBJS_DIRS	= .build

OBJS		= 	$(patsubst %.cpp, $(OBJS_DIRS)/%.o, $(SRCS))

all:	$(NAME)

$(NAME) : $(OBJS)
		$(CC) $(OBJS) -o $@

$(OBJS_DIRS)/%.o: %.cpp $(INCLUDES)
		@mkdir -p $(OBJS_DIRS)
		$(CC) $(CFLAGS) -o $@ -c $<

clean:
		rm -rf $(OBJS_DIRS)

fclean: clean
		rm -f $(NAME)

re : clean all

.PHONY: all clean fclean re makelib
