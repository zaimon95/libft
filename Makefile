objects = foo.o bar.o all.o

NAME = libft.a

all: $(NAME)

$(NAME): $(objects)
	$(CC) $^ -o all
