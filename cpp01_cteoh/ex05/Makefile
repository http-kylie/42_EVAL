# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cteoh <cteoh@student.42kl.edu.my>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/03 19:35:28 by cteoh             #+#    #+#              #
#    Updated: 2024/08/03 19:35:42 by cteoh            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# PROGRAM NAME
NAME = harl2.0

# SOURCE AND OBJECT FILES
SRCDIR	= src
SRC		= main.cpp Harl.cpp
vpath %.cpp $(shell find $(SRCDIR) -type d -print | tr "\n" : 				  \
			| awk '{print substr($$1, 1, length($$1)-1)}')

OBJDIR	= obj
OBJ		= $(patsubst %.cpp, $(OBJDIR)/%.o, $(SRC))
vpath %.o $(OBJDIR)

# HEADERS
INCLUDEDIR		= include
INCLUDE			= Harl.hpp
INCLUDEFLAGS	= -I$(INCLUDEDIR)
vpath %.hpp $(INCLUDEDIR)

# LIBRARIES
LIBDIR	= lib
LIB		= cpp01ex05
vpath %.a $(LIBDIR)
LDFLAGS	= -L$(LIBDIR)
LDLIBS	= -l$(LIB)

# OTHER COMMANDS AND FLAGS
WARNING		= -Wall -Wextra -Werror
DSYM		= -g3
FSANA		= -fsanitize=address $(DSYM)
CXXFLAGS	= -std=c++98 $(WARNING) $(INCLUDEFLAGS) $(FSANA)
CXX			= c++
RM			= rm -rf
AR			= ar -rcs
MAKEFLAGS	= --no-print-directory

# MISC
RED		= \e[0;31m
GREEN	= \e[0;32m
YELLOW	= \e[0;33m
RESET	= \e[0m

all: $(NAME)

$(NAME): $(OBJDIR) $(LIBDIR) lib$(LIB).a
	@printf "$(GREEN)Generating $(NAME) executable...$(RESET)\n"
	@$(CXX) $(CXXFLAGS) $(LDFLAGS) $(LDLIBS) -o $(NAME)

lib$(LIB).a: $(OBJ)
	@printf "$(GREEN)Archiving lib$(LIB)...$(RESET)\n"
	@$(AR) $(LIBDIR)/lib$(LIB).a $(OBJ)

$(OBJDIR)/%.o: %.cpp $(INCLUDE)
	@$(CXX) -c $(CXXFLAGS) $< -o $@

$(OBJDIR):
	@mkdir -p $(OBJDIR)

$(LIBDIR):
	@mkdir -p $(LIBDIR)

clean:
	@printf "$(GREEN)Removing all object files...$(RESET)\n"
	@$(RM) $(OBJDIR)

fclean: clean
	@printf "$(GREEN)Removing all libraries and executable...$(RESET)\n"
	@$(RM) $(LIBDIR) $(NAME)

re: fclean all

.PHONY: all clean fclean re
