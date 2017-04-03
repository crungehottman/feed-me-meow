CC=g++ -std=c++0x

CFLAGS=-c -Wall

all: catSim

catSim: catSimulator.o Space.o Kitchen.o Cabinet.o Counter.o Bathroom.o Livingroom.o HidingPlace.o Item.o
	$(CC) catSimulator.o Space.o Kitchen.o Cabinet.o Counter.o Bathroom.o Livingroom.o HidingPlace.o Item.o -o catSim

catSimulator.o: catSimulator.cpp
	$(CC) $(CFLAGS) catSimulator.cpp

Space.o: Space.cpp
	$(CC) $(CFLAGS) Space.cpp

Kitchen.o: Kitchen.cpp
	$(CC) $(CFLAGS) Kitchen.cpp

Cabinet.o: Cabinet.cpp
	$(CC) $(CFLAGS) Cabinet.cpp

Counter.o: Counter.cpp
	$(CC) $(CFLAGS) Counter.cpp

Bathroom.o: Bathroom.cpp
	$(CC) $(CFLAGS) Bathroom.cpp

Livingroom.o: Livingroom.cpp
	$(CC) $(CFLAGS) Livingroom.cpp

HidingPlace.o: HidingPlace.cpp
	$(CC) $(CFLAGS) HidingPlace.cpp

Item.o: Item.cpp
	$(CC) $(CFLAGS) Item.cpp

clean:
	rm *.o catSim
