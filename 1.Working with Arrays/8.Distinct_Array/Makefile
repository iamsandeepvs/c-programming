GCC = gcc
CFLAGS = -g -Wall -Wshadow
VALGRIND = valgrind --tool=memcheck --verbose --log-file

prog: aredistinct.o main.o
	$(GCC) $(CFLAGS) aredistinct.o main.o -o prog
aredistinct.o: aredistinct.c
	$(GCC) $(CFLAGS) -c aredistinct.c
main.o: main.c
	$(GCC) $(CFLAGS) -c main.c