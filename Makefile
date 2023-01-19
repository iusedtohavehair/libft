SRCS = 	ft_strnstr.c \
		ft_isdigit.c \
		ft_putstr_fd.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_memcmp.c \
		ft_putnbr_fd.c \
		ft_strchr.c \
		ft_bzero.c \
		ft_strjoin.c \
		ft_isascii.c \
		ft_memcpy.c \
		ft_isprint.c \
		ft_putendl_fd.c \
		ft_toupper.c \
		ft_split.c \
		ft_striteri.c \
		ft_strrchr.c \
		ft_isalpha.c \
		ft_memchr.c \
		ft_putchar_fd.c \
		ft_memset.c \
		ft_substr.c \
		ft_strncmp.c \
		ft_strmapi.c \
		ft_strtrim.c \
		ft_memmove.c \
		ft_strlcat.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_atoi.c \
		ft_isalnum.c \
		ft_itoa.c \
		ft_tolower.c \


SRCSBONUS = ft_lstadd_back.c \
			ft_lstnew.c \
			ft_lstlast.c \
			ft_lstiter.c \
			ft_lstsize.c \
			ft_lstadd_front.c \
			ft_lstdelone.c \
			ft_lstclear.c \

NAME = libft.a

OBJS_DIR = objects/
OBJS = $(SRCS:.c=.o)
OBJECTS_WITH_DIR = $(addprefix $(OBJS_DIR), $(OBJS))

OBJSB = $(SRCSBONUS:.c=.o)
OBJECTS_BONUS_WITH_DIR= $(addprefix $(OBJS_DIR), $(OBJSB))

CC = gcc

CC_FLAGS = -Wall -Wextra -Werror

$(OBJS_DIR)%.o : %.c libft.h
	@mkdir -p $(OBJS_DIR)
	@echo "Compile: $<"
	@CC $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJECTS_WITH_DIR)
	@ar r $(NAME) $(OBJECTS_WITH_DIR)
	@echo "\nLibft OK\n"

all: $(NAME)

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJECTS_BONUS_WITH_DIR)
	@ar r $(NAME) $(OBJECTS_BONUS_WITH_DIR)
	@echo "\nLibft Bonus OK\n"