CC=g++
CFLAGS=-c -Wall -std=c++11

all: chicken

chicken: driver.o Bone.o Yard.o
	$(CC) driver.o Bone.o Yard.o -o chicken

driver.o: driver.cpp
	$(CC) $(CFLAGS) driver.cpp

bone.o: Bone.cpp
	$(CC) $(CFLAGS) Bone.cpp Bone.h

yard.o: Yard.cpp
	$(CC) $(CFLAGS) Yard.cpp Yard.h

clean:
	rm -rf *o chicken




