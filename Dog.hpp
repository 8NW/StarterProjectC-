#ifndef Dog_hpp
#define Dog_hpp

#include "AnimalClass.hpp"

#include <stdio.h>
#include <string>
#include <cstring>

// Our Code Here


class Dog : public AnimalClass
{
public:
	Dog();
	Dog(int sizeInput, std::string nameInput);

	std::string getSound() const;
	
private:
	std::string sound;

};


#endif