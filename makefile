CC=gcc
AR=ar
OBJECTS_MAIN=isort.o
FLAGS= -Wall -g


all:isort txtfind


isort: isort.c
	$(CC) $(FLAGS)  isort.c -o isort


txtfind: txtfind.c
	$(CC) $(FLAGS) txtfind.c -o txtfind	


.PHONY:all clean

clean:
	rm isort txtfind

