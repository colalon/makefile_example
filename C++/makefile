CC = g++
CFLAGS = -O3 -ansi
OPENCV = `pkg-config opencv --cflags --libs`
all: main.o
	${CC} main.o ${CFLAGS} ${OPENCV} -o main
main.o: main.cpp
	${CC} main.cpp -c
clean:
	rm -rf main.o main