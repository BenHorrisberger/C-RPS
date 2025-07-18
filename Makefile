main: main.o get_player_throw.o
	cc -g main.o get_player_throw.o -o main

main.o: main.c get_player_throw.h
	cc -c -g main.c -o main.o

get_player_throw.o: get_player_throw.h get_player_throw.c
	cc -c -g get_player_throw.c -o get_player_throw.o

clean:
	rm -f *.o main