NAME				=	push_swap

CC					=	cc
CFLAGS 				=	-Wall -Werror -Wextra
AR 					=	ar
ARFLAGS				=	rcs
RM					=	rm -rf

SRCS				=	$(wildcard *.c)

OBJ_DIR				=	obj
OBJS				=	$(SRCS:%.c=$(OBJ_DIR)/%.o)

LIBFT_PATH			= 	./ft_printf/libft
LIBFT				= 	$(LIBFT_PATH)/libft.a

PRINTF_PATH			= 	./ft_printf
PRINTF				= 	$(PRINTF_PATH)/libftprintf.a

$(OBJ_DIR)/%.o:		%.c	
								$(CC) $(CFLAGS) -c $< -o $@
all:				$(NAME)

$(LIBFT):		
						make -C $(LIBFT_PATH) all

$(PRINTF):		
						make -C $(PRINTF_PATH) all						

$(NAME): 			$(LIBFT) $(PRINTF) $(OBJ_DIR) $(OBJS)
					cp	$(LIBFT) $(NAME)
					cp	$(PRINTF) $(NAME)
						 $(CC) $(CFLAGS) $(OBJS) -o $(NAME) -L$(LIBFT_PATH) -L$(PRINTF_PATH) -lft -lftprintf

$(OBJ_DIR):		
						mkdir -p $(OBJ_DIR)

clean:
						make -C $(LIBFT_PATH) clean
						make -C $(PRINTF_PATH) clean
						$(RM) $(OBJ_DIR)

fclean: 			clean
						make -C $(LIBFT_PATH) fclean
						make -C $(PRINTF_PATH) fclean	
						$(RM) $(NAME)

re: 				fclean all

.PHONY: 			all clean fclean re libft ft_printf
