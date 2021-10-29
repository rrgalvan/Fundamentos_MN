CC = gcc
CFLAGS = -lm

TARGET = valor_absoluto norma_euclidea

all: $(TARGET)

%: %.c
	$(CC) $< -o $@ $(CFLAGS)

clean:
	rm -f $(TARGET)
