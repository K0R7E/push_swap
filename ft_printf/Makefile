# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akortvel <akortvel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/17 13:50:25 by akortvel          #+#    #+#              #
#    Updated: 2023/09/20 16:15:39 by akortvel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				=	libftprintf.a

CC					=	cc
CFLAGS				=	-Wall -Wextra -Werror
AR 					=	ar
ARFLAGS				=	rcs
RM					=	rm -rf

SRCS         	   	= 	ft_printf.c ft_putnbr_dec.c ft_putnbr_int.c ft_putnbr_base_hex_low.c ft_putnbr_base_hex_up.c \
						ft_putpercent.c ft_putptr.c ft_putunsigned.c ft_printf_utils.c

OBJ_DIR				=	obj
OBJS				=	$(SRCS:%.c=$(OBJ_DIR)/%.o)	

LIBFT_PATH			= 	./libft
LIBFT				= 	$(LIBFT_PATH)/libft.a 

$(OBJ_DIR)/%.o:		%.c	
								$(CC) $(CFLAGS) -c $< -o $@
all:				$(NAME)

$(LIBFT):		
						make -C $(LIBFT_PATH) all

$(NAME): 			$(LIBFT) $(OBJ_DIR) $(OBJS)
					cp	$(LIBFT) $(NAME)
						$(AR)	$(ARFLAGS)	$(NAME)	$(OBJS)

$(OBJ_DIR):		
						mkdir -p $(OBJ_DIR)


clean:
						make -C $(LIBFT_PATH) clean
						$(RM) $(OBJ_DIR)

fclean: 			clean
						make -C $(LIBFT_PATH) fclean	
						$(RM) $(NAME)

re: 				fclean all

.PHONY: 			all clean fclean re libft
