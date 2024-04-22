NAME = BARBIQ

CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = BARBIQ.c
OBJ = $(SRC:.c=.o)
TARGET = $(NAME)

all: $(TARGET)

$(TARGET):	$(OBJ)
	$(CC)	$(CFLAGS) $^ -o $@

clean:
	rm -f	$(OBJ)	$(TARGET)
