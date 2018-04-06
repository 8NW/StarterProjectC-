CXX = g++
CXXFLAGS = -Wall -g

all: main.o AnimalClass.o Cat.o Dog.o
	$(CXX) $(CXXFLAGS) -o executable main.o AnimalClass.o Cat.o Dog.o

main.o: Cat.hpp AnimalClass.hpp Dog.hpp


AnimalClass.o: AnimalClass.hpp

Cat.o: Cat.hpp AnimalClass.hpp

Dog.o: Dog.hpp AnimalClass.hpp
