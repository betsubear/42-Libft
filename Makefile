# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aroyet <aroyet@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/13 18:16:34 by aroyet            #+#    #+#              #
#    Updated: 2023/03/07 22:15:10 by aroyet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#####################################
#			COLORS					#
#####################################

GREEN		= \033[0;32m
NC		= \033[0m # No Color
RED		= \033[0;31m
BLUE		= \033[0;34m

#####################################
#		MAIN FUNCTIONS				#
#####################################

SRCS		+= ft_atoi.c
SRCS		+= ft_bzero.c
SRCS		+= ft_calloc.c
SRCS		+= ft_isalnum.c
SRCS		+= ft_isalpha.c
SRCS		+= ft_isascii.c
SRCS		+= ft_isdigit.c
SRCS		+= ft_isprint.c
SRCS		+= ft_isspace.c
SRCS		+= ft_itoa.c
SRCS		+= ft_memchr.c
SRCS		+= ft_memcmp.c
SRCS		+= ft_memcpy.c
SRCS		+= ft_memmove.c
SRCS		+= ft_memset.c
SRCS		+= ft_putchar_fd.c
SRCS		+= ft_putendl_fd.c
SRCS		+= ft_putnbr_fd.c
SRCS		+= ft_putstr_fd.c
SRCS		+= ft_split.c
SRCS		+= ft_strchr.c
SRCS		+= ft_striteri.c
SRCS		+= ft_strdup.c
SRCS		+= ft_strjoin.c
SRCS		+= ft_strlcat.c
SRCS		+= ft_strlcpy.c
SRCS		+= ft_strlen.c
SRCS		+= ft_strmapi.c
SRCS		+= ft_strncmp.c
SRCS		+= ft_strnstr.c
SRCS		+= ft_strrchr.c
SRCS		+= ft_strtrim.c
SRCS		+= ft_substr.c
SRCS		+= ft_tolower.c
SRCS		+= ft_toupper.c
SRCS		+= ft_isupper.c
SRCS		+= ft_islower.c

#####################################
#		BONUS FUNCTIONS				#
#####################################

SRCS_BONUS	+= ft_lstadd_back.c
SRCS_BONUS	+= ft_lstadd_front.c
SRCS_BONUS	+= ft_lstclear.c
SRCS_BONUS	+= ft_lstdelone.c
SRCS_BONUS	+= ft_lstiter.c
SRCS_BONUS	+= ft_lstlast.c
SRCS_BONUS	+= ft_lstmap.c
SRCS_BONUS	+= ft_lstnew.c
SRCS_BONUS	+= ft_lstsize.c

OBJS		= $(addprefix $(OBJDIR)/, $(SRCS:.c=.o))

OBJS_BONUS	= $(addprefix $(OBJDIR)/, $(SRCS_BONUS:.c=.o))

OBJDIR		= objects

NAME		= libft.a

INCLUDES	= ./

HEADER		= $(INCLUDES)libft.h

CC		= cc

CFLAGS		+= -Wall
CFLAGS		+= -Wextra
CFLAGS		+= -Werror

CPPFLAGS	+= -I $(INCLUDES)

all:		 $(NAME)

$(NAME):	$(OBJS)
		ar rcs $@ $^

bonus:		$(NAME) $(OBJS_BONUS)
		ar rcs $(NAME) $(OBJS_BONUS)
		touch bonus
			
$(OBJDIR):
		mkdir $@

$(OBJDIR)/%.o:	%.c
		$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

$(OBJS):	$(HEADER) | $(OBJDIR)

$(OBJS_BONUS):	$(HEADER)

clean:
		$(RM) -r $(OBJDIR)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
