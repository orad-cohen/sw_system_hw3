CC=gcc
AR=ar
OBJECTS_MAIN=isort.o
FLAGS= -Wall -g


all:isort txtfind


isort: isort.a isortmain.o
	$(CC) $(FLAGS) -o isort isortmain.o isort.a  

isort.a: isort.o
	$(AR) -rcs -o isort.a isort.o

isort.o: isort.c isort.h
	$(CC) $(FLAGS) -c isort.c

isortmain.o: isortmain.c isort.h
	$(CC) $(FLAGS) -c isortmain.c

txtfind: txtfindmain.o txtfind.a
	$(CC) $(FLAGS) -o txtfind txtfindmain.o txtfind.a 

txtfind.a: txtfind.o
	$(AR) -rcs txtfind.a txtfind.o

txtfind.o: txtfind.c
	$(CC) $(FLAGS) -c txtfind.c

txtfindmain.o: txtfindmain.c txtfind.h
	$(CC) $(FLAGS) -c txtfindmain.c


.PHONY:all clean

clean:
	rm *.a *.o isort txtfind

