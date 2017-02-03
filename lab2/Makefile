CC = gcc
objects = main.o areaOfRectangle.o areaOfSquare.o areaOfCircle.o area_of_triangle.o
headers = areaOfRectangle.h areaOfSquare.h areaOfCircle.h area_of_triangle.h

myprog : $(objects)
	$(CC) -o areaProg $(objects) -lm

main.o : main.c $(headers)
	$(CC) -g -c main.c

areaOfRectangle.o : areaOfRectangle.c
	$(CC) -g -c areaOfRectangle.c

areaOfSquare.o : areaOfSquare.c areaOfRectangle.c
	$(CC) -g -c areaOfSquare.c

areaOfCircle.o : areaOfCircle.c
	$(CC) -g -c areaOfCircle.c

area_of_triangle.o : area_of_triangle.c
	$(CC) -g -c area_of_triangle.c -lm

clean:
	rm areaProg $(objects)