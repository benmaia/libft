#Name of the project
NAME	=	libft.a

#Compiler + Flags 
# -I (include) Specifies a directory dir to search for included makefiles.
CC	=	gcc
CFLAGS	=	-Wall -Wextra -Werror
RM	=	rm -f

#.c files
SRC	=	ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
ft_isprint.c ft_memchr.c ft_memcmp.c ft_striter.c ft_striteri.c\
ft_memcpy.c ft_memmove.c ft_memset.c ft_putendl_fd.c\
ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c\
ft_strchr.c ft_strlcpy.c ft_strmapi.c\
ft_strdup.c ft_split.c ft_calloc.c ft_itoa.c\
ft_strlen.c ft_strncmp.c ft_substr.c ft_strtrim.c\
ft_strnstr.c ft_strrchr.c ft_strjoin.c\
ft_tolower.c ft_toupper.c ft_strlcat.c ft_strncat.c

#Object files
OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
			ar rcs $(NAME) $(OBJ)

clean:
			$(RM) $(OBJ)

fclean:	clean
			$(RM) $(NAME)

re:	fclean $(NAME)

# Is just a name for a recipe to be executed when you make an explicit request. 
# Avoid a conflict with a file of the same name, and to improve performance.
.PHONY: all clean fclean re