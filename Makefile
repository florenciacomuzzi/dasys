CC=gcc
DEPS = hash_table.h

%.o: %.c $(DEPS)
	$(CC) -g -c -o $@ $< $ -I.

main: hash_table.o main.o 
	gcc -g -O0 -o main hash_table.o main.o -I.

test: hash_table.o test.o 
	gcc -g -O0 -o test hash_table.o test.o -I.

benchmark: hash_table.o benchmark.o 
	gcc -g -O3 -o benchmark hash_table.o benchmark.o -I.

clean:
	@rm -f main test benchmark *.o
