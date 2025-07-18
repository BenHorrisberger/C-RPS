main: main.o player_throw.o
	cc -g main.o player_throw.o -o main

main.o: main.c player_throw.h
	cc -c -g main.c -o main.o

player_throw.o: player_throw.h player_throw.c
	cc -c -g player_throw.c -o player_throw.o

clean:
	rm -f *.o main
	clear