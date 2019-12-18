CC=gcc
AR=ar
OBJECTS_MAIN=isort.o
FLAGS= -Wall -g


all:isort


isort: isort.o
	$(CC) $(FLAGS)  isort.c -o isort



.PHONY:all clean

clean:
	rm *.o isort

