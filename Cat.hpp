#ifndef Cat_hpp
#define Cat_hpp

#include "AnimalClass.hpp"

#include <stdio.h>
#include <string>
#include <cstring>



class Cat : public AnimalClass
{
public:
	Cat();
	Cat(int sizeInput, std::string nameInput);

	std::string getSound() const;
	
private:
	std::string sound;

};


#endif