CC=gcc
CFLAGS=-I.
DEPS = hash_table.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: hash_table.o main.o 
	gcc -o main hash_table.o main.o -I.

test: hash_table.o test.o 
	gcc -o test hash_table.o test.o -I.

benchmark: hash_table.o benchmark.o 
	gcc -o benchmark hash_table.o benchmark.o -I.

clean:
	@rm -f main test benchmark *.o
