CFLAGS = -Wall -Wextra -Werror -lncurses
CC = g++ -std=c++17
SOURCEFILE = main.cpp source.cpp

all:
	$(CC) $(CFLAGS) $(SOURCEFILE) -o temp
	
	rm -rf *.o *.out
	