#ifndef AnimalClass_hpp
#define AnimalClass_hpp

#include <stdio.h>

#include <string>
#include <cstring>

// Our Code Here


class AnimalClass
{
public:
	AnimalClass();
	AnimalClass(int sizeInput, std::string nameInput);

	int getSize() const;
	std::string getName() const;

	
private:
	int size;
	std::string name;

};


#endif