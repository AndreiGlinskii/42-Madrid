
NAME = rush-02

SRCS = main.c main.h 

FLAGS = -Wall -Werror -Wextra

all: ${NAME}

${NAME}: ${OBJS}
	cc ${FLAGS} -c main.c main.h dictionary.c dictionary.h print.c print.h
	cc ${FLAGS} main.o dictionary.o print.o -o ${NAME}

clean:
	rm -f *.o

fclean:
	rm -f ${NAME}
