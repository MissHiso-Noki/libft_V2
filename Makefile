# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/16 13:41:19 by ccoste            #+#    #+#              #
#    Updated: 2023/04/19 19:29:04 by ccoste           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

SRC_PATH = sources/
SRC_BONUS_PATH = sources_bonus/

OBJ_PATH = objet_o/
OBJ_BONUS_PATH = objet_bonus_o/

SRC = ft_atoi.c \
	ft_isprint.c \
	ft_putchar_fd.c \
	ft_bzero.c \
	ft_putendl_fd.c \
	ft_strjoin.c \
	ft_strrchr.c \
	ft_memchr.c \
	ft_strlcat.c \
	ft_strtrim.c \
	ft_isalnum.c \
	ft_memcmp.c \
	ft_putstr_fd.c \
	ft_strlcpy.c \
	ft_substr.c \
	ft_isalpha.c \
	ft_memcpy.c \
	ft_strlen.c \
	ft_tolower.c \
	ft_isascii.c \
	ft_memmove.c \
	ft_strchr.c \
	ft_toupper.c \
	ft_isdigit.c \
	ft_memset.c \
	ft_strdup.c \
	ft_strncmp.c \
	ft_itoa.c \
	ft_calloc.c \
	ft_putnbr_fd.c \
	ft_strnstr.c \
	ft_striteri.c \
	ft_strmapi.c \
	ft_split.c

SRC_BONUS = ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c

SRCS	= $(addprefix $(SRC_PATH), $(SRC))
OBJ		= $(SRC:.c=.o)
OBJS 	= $(addprefix $(OBJ_PATH), $(OBJ))
INCS 	= -I ./includes/

SRCS_BONUS = $(addprefix $(SRC_BONUS_PATH), $(SRC_BONUS))
BONUS_OBJ= $(SRC_BONUS:.c=.o)
OBJS_BONUS = $(addprefix $(OBJ_BONUS_PATH), $(BONUS_OBJ))

all: $(OBJ_PATH) $(OBJ_BONUS_PATH) $(NAME)

$(OBJ_PATH)%.o : $(SRC_PATH)%.c
	$(CC) $(CFLAGS) -g -c $< -o $@ $(INCS)

$(OBJ_BONUS_PATH)%.o : $(SRC_BONUS_PATH)%.c
	$(CC) $(CFLAGS) -g -c $< -o $@ $(INCS)

$(OBJ_PATH):
	mkdir $(OBJ_PATH)

$(OBJ_BONUS_PATH):
	mkdir $(OBJ_BONUS_PATH)

$(NAME) : $(OBJS) $(OBJS_BONUS)
		ar rcs $(NAME) $(OBJS) $(OBJS_BONUS)
		$(CC) $(CFLAGS) $(OBJS) $(OBJS_BONUS) -o $(NAME)

clean :
	rm -rf $(OBJ_PATH) $(OBJ_BONUS_PATH)

fclean : clean
	rm -rf $(NAME) $(NAME_BONUS)

re : fclean all

.PHONY : all clean fclean re
