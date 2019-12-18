CC=gcc
AR=ar
OBJECTS_MAIN=isort.o
FLAGS= -Wall -g


all:isort txtfind


isort: isort.c
	$(CC) $(FLAGS)  isort.c -o isort


txtfind: txtfile.c
	$(CC) $(FLAGS) txtfile.c -o txtfind	


.PHONY:all clean

clean:
	rm *.o isort txtfind

