MAKEFLAGS += -s
NAME				= philo
LIBFT				= ./libft/libft.a
INC					= inc/
SRC_DIR				= src/
OBJ_DIR				= obj/
CC					= cc
CFLAGS				= -pthread -fsanitize=thread -Wall -Werror -Wextra -I$(INC)
RM					= rm -rf
SRCS				= $(wildcard $(SRC_DIR)*.c)
OBJS				= $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRCS))

all: 				$(NAME)

$(NAME): 			$(OBJS) $(LIBFT)
					@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)
					@clear
					@echo " "
					@echo " "
					@echo "        ▄███████▄    ▄█    █▄     ▄█   ▄█        ▄██████▄  "
					@echo "       ███    ███   ███    ███   ███  ███       ███    ███ "
					@echo "       ███    ███   ███    ███   ███▌ ███       ███    ███ "
					@echo "       ███    ███  ▄███▄▄▄▄███▄▄ ███▌ ███       ███    ███ "
					@echo "     ▀█████████▀  ▀▀███▀▀▀▀███▀  ███▌ ███       ███    ███ "
					@echo "       ███          ███    ███   ███  ███       ███    ███ "
					@echo "       ███          ███    ███   ███  ███▌    ▄ ███    ███ "
					@echo "      ▄████▀        ███    █▀    █▀   █████▄▄██  ▀██████▀  "
					@echo "                                      ▀                    "
					@echo " "
					@echo " "
					@echo "✅ Compiled successfully."
					@echo " "
					@sleep 1
					@clear
					@echo " "
					@echo " "
					@echo "        ▄███████▄    ▄█    █▄     ▄█   ▄█        ▄██████▄  "
					@echo "       ███    ███   ███    ███   ███  ███       ███    ███ "
					@echo "       ███    ███   ███    ███   ███▌ ███       ███    ███ "
					@echo "       ███    ███  ▄███▄▄▄▄███▄▄ ███▌ ███       ███    ███ "
					@echo "     ▀█████████▀  ▀▀███▀▀▀▀███▀  ███▌ ███       ███    ███ "
					@echo "       ███          ███    ███   ███  ███       ███    ███ "
					@echo "       ███          ███    ███   ███  ███▌    ▄ ███    ███ "
					@echo "      ▄████▀        ███    █▀    █▀   █████▄▄██  ▀██████▀  "
					@echo "                                      ▀                    "
					@echo " "
					@echo " "

$(OBJ_DIR)%.o:		$(SRC_DIR)%.c
					@mkdir -p $(@D)
					@$(CC) $(CFLAGS) -c $< -o $@
					@echo "🔧 Compiling... $<"

$(LIBFT):
					@make -C ./libft

clean:
					@$(RM) $(OBJ_DIR)/*
					@make clean -C ./libft
					clear
					@echo " "
					@echo "🗑️ All objects removed."
					@echo " "

fclean: 			clean
					@$(RM) $(NAME)
					@$(RM) $(OBJ_DIR)
					@make fclean -C ./libft
					@clear
					@echo " "
					@echo " "
					@echo "        ▄███████▄    ▄█    █▄     ▄█   ▄█        ▄██████▄  "
					@echo "       ███    ███   ███    ███   ███  ███       ███    ███ "
					@echo "       ███    ███   ███    ███   ███▌ ███       ███    ███ "
					@echo "       ███    ███  ▄███▄▄▄▄███▄▄ ███▌ ███       ███    ███ "
					@echo "     ▀█████████▀  ▀▀███▀▀▀▀███▀  ███▌ ███       ███    ███ "
					@echo "       ███          ███    ███   ███  ███       ███    ███ "
					@echo "       ███          ███    ███   ███  ███▌    ▄ ███    ███ "
					@echo "      ▄████▀        ███    █▀    █▀   █████▄▄██  ▀██████▀  "
					@echo "                                      ▀                    "
					@echo " "
					@echo " "
					@echo "🗑️ All clean."
					@echo " "
					@sleep 1
					@clear
					@echo " "
					@echo " "
					@echo "        ▄███████▄    ▄█    █▄     ▄█   ▄█        ▄██████▄  "
					@echo "       ███    ███   ███    ███   ███  ███       ███    ███ "
					@echo "       ███    ███   ███    ███   ███▌ ███       ███    ███ "
					@echo "       ███    ███  ▄███▄▄▄▄███▄▄ ███▌ ███       ███    ███ "
					@echo "     ▀█████████▀  ▀▀███▀▀▀▀███▀  ███▌ ███       ███    ███ "
					@echo "       ███          ███    ███   ███  ███       ███    ███ "
					@echo "       ███          ███    ███   ███  ███▌    ▄ ███    ███ "
					@echo "      ▄████▀        ███    █▀    █▀   █████▄▄██  ▀██████▀  "
					@echo "                                      ▀                    "
					@echo " "
					@echo " "

re: 				fclean all

start:				
					@make all

.PHONY: 			all clean fclean re start
