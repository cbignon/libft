NAME= libft

SOURCES=	ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strlcat.c \
			ft_strlen.c \
			ft_strnstr.c \
			*ft_strchr.c \
			*ft_strrchr.c \
			ft_strncmp.c \
			ft_strlcpy.c \

CFLAGS= -Wall -Werror -Wextra

CC= clang

.c.o : 
	$(CC) $(CFLAGS) -c $<

OBJETS= $(SOURCES:.c=.o)

$(NAME) : $(OBJETS)
	ar -rc $(NAME).a $(OBJETS)

all : $(NAME)

so : all
	$(CC) -o $(NAME).so -shared $(OBJETS)

clean :
	rm -f $(OBJETS)

fclean : clean
	rm -f $(NAME).a
	rm -f $(NAME).so

re : fclean all